/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:42:38 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/16 00:33:11 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start , size_t len)
{
    char *str;
    size_t a = 0;
    if(!s)
    return (NULL);
    size_t i = strlen(s);
    if(start > i)
    return (strdup(""));
    if(len > strlen(s + start))
    len = strlen(s + start);
    str = calloc(len + 1, sizeof(char));
    if(!str)
    return(NULL);
    while (a < len)
    {
        str[a] = s[start + a];
        a++;
    }
    return(str);
}

/*
int	main(void) {
    const char *input_string = "hello honey";
    unsigned int start_index = 6;
    size_t substring_length = 5;

    char *result = ft_substr(input_string, start_index, substring_length);

    if (result != NULL) {
        printf("Original String: %s\n", input_string);
        printf("Substring from index %u with length %zu: %s\n", start_index,
		substring_length, result);

        // Don't forget to free the allocated memory
        free(result);
    } else {
        printf("Error: Unable to create substring.\n");
    }

    return (0);
}
*/
