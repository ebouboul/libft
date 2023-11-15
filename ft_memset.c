/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:40:20 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 23:49:45 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	p = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
    char myArray[10];
	char	value;

    value = 'A';
    ft_memset(myArray, value, 5);
    // Print the content of myArray
    for (size_t i = 0; i < sizeof(myArray); i++) {
        printf("%c ", myArray[i]);
    }
    printf("\n");
    return (0);
}
*/