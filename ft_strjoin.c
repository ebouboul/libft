/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:42:57 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:42:59 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*res;
	size_t	i;
	size_t	j;

	if (!*s1 && !*s2)
		return (NULL);
	size = 0;
	if (s1)
		size += ft_strlen(s1);
	if (s2)
		size += ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main(void) {
    const char *s1 = "hruy    ";
    const char *s2 = "gjhgjf";
    char *result = ft_strjoin(s1, s2);

    if (result != NULL) {
        printf("String 1: %s\n", s1);
        printf("String 2: %s\n", s2);
        printf("Concatenated String: %s\n", result);
        
        free(result);
    } else {
        printf("Error: Unable to concatenate strings.\n");
    }

    return (0);
}
*/