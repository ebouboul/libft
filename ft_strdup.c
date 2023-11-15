/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:47:16 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:47:18 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup_str;

	len = ft_strlen(s);
	dup_str = (char *)malloc(len + 1);
	if (dup_str != NULL)
	{
		ft_strlcpy(dup_str, s, len);
	}
	return (dup_str);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int	main(void) {
    const char *original = "Hello, World!";
    
    char *duplicate = ft_strdup(original);
    
    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate); 
    } else {
        printf("Memory allocation failed.\n");
    }

    return (0);
}
*/