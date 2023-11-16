/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:45:47 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:45:49 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (NULL);
}

/*int main() {
    const char *str = "Hello, World!";
    char searchChar = '8';
    size_t n = strlen(str);

    void *result = ft_memchr(str, searchChar, n);

    if (result != 0) {
        printf("Found '%c' at position %td\n", searchChar, (char *)result
		- str);
    } else {
        printf("'%c' not found in the string\n", searchChar);
    }

    return (0);
} */