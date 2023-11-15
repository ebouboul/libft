/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:43:43 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:43:44 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strrchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end && s1[end] && ft_strrchr(set, s1[end]))
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
/*
int	main(void)
{
	const char	*input_string;
	char		*trimmed_string;
	const char	*trim_set;

	input_string = "hraaahelloekjaaaaff";
	trim_set = "a";
	trimmed_string = ft_strtrim(input_string, trim_set);
	if (trimmed_string)
	{
		printf("Original String: \"%s\"\n", input_string);
		printf("Trimmed String: \"%s\"\n", trimmed_string);
		free(trimmed_string);
	}
	else
		printf("Memory allocation failed or input was NULL.\n");
	return (0);
}
*/