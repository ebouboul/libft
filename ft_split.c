/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:44:02 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:44:05 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	if (!s)
		return (0);
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**free_tab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!s || !tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < ft_countword(s, c))
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i])
			i++;
		tab[j] = ft_substr(s, k, i - k);
		if (i > k && !(tab[j]))
			return (free_tab(tab, j));
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
/*
int	main(void)
{
	const char	*input_string;
	char		**result;
	int			i;

	input_string = "hi0hello0wohrld";
	result = ft_split(input_string, '0');
	if (result != NULL)
	{
		printf("Split Strings:\n");
		i = 0;
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			i++;
		}
		// Free the allocated memory
		i = 0;
		while (result[i] != NULL)
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
	{
		printf("Error: Unable to split string.\n");
	}
	return (0);
}
*/