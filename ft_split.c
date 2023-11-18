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

static char	**freearray(char **str, int i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (0);
}

static int	coutwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char	*copywords(char const *s, char *word, int i, int lenword)
{
	int	j;

	j = 0;
	while (lenword > 0)
	{
		word[j] = s[i - lenword];
		lenword--;
		j++;
	}
	word[j] = '\0';
	return (word);
}

static char	**splitwords(char const *s, char c, char **s2, int countwords)
{
	int	i;
	int	lenword;
	int	word;

	word = 0;
	i = 0;
	lenword = 0;
	while (word < countwords)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			lenword++;
			i++;
		}
		s2[word] = (char *)malloc(lenword + 1);
		if (!s2[word])
			return (freearray(s2, word));
		copywords(s, s2[word], i, lenword);
		lenword = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**s2;

	wc = coutwords(s, c);
	if (!s)
		return (0);
	s2 = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!s2)
		return (0);
	splitwords(s, c, s2, wc);
	return (s2);
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