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

size_t strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = ft_strlen(src);

    if (size > 0) {
        size_t i = 0;

        while (i < size - 1 && src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }

        dest[i] = '\0';
    }

    return src_len;
}
/*
#include <stdio.h>

int main() {
    char destination[10];
    const char *source = "Hello, World!";
    size_t bufferSize = sizeof(destination);

    size_t copiedLength = strlcpy(destination, source, bufferSize);

    printf("Copied String: %s\n", destination);
    printf("Length of Copied String: %zu\n", copiedLength);

    return 0;
}
*/