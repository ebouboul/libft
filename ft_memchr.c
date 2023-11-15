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
	const unsigned char	*p;

	p = s;
	while (n--)
	{
		if (*p == c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (0);
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