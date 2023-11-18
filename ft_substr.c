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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	finish;
	char	*newstr;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start >= slen)
		return (ft_strdup(""));
	finish = slen - start;
	if (finish > len)
		finish = len;
	newstr = (char *)malloc(finish + 1);
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, &s[start], finish + 1);
	return (newstr);
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
