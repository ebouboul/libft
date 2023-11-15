/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:40:57 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:41:00 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    if(!dest && !src)
        return (NULL);
    if(dest != src)
    {
        while (i < n)
        {
            ((unsigned char*) dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char d[6];
	char s[] = "hello";
	ft_memcpy(d, s, 2);
	printf("%s",d );
    return (0);
}
*/