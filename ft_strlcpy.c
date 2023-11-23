/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:42:21 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:42:22 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len = ft_strlen(src);
    if(dstsize > len + 1)
            ft_memcpy(dst, src, len + 1);
    else if(dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        dst[dstsize-1] = '\0';
    }
    return(len);
}
/*
#include <stdio.h>

int	main(void) {
    char destination[10];
    const char *source = "Hello, World!";
    size_t bufferSize = sizeof(destination);

    size_t copiedLength = strlcpy(destination, source, bufferSize);

    printf("Copied String: %s\n", destination);
    printf("Length of Copied String: %zu\n", copiedLength);

    return (0);
}
*/