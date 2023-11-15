/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:41:15 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:41:19 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (d == s) {
        return d;
    }

    if (d < s || d >= s + n) {
        
        while (n--) {
            *d++ = *s++;
        }
    } else {
        d = d + n - 1;
        s = s + n - 1;
        while (n--) {
            *d-- = *s--;
        }
    }

    return dest;
}

/*#include <stdio.h>
#include <string.h>

int main() {
   char str1[] = "Hello, world!";
   char str2[] = "           ";
   char str3[] = "XXXXXXXXXXXXXXXX";

   printf("Before memmove:\n");
   printf("str1: %s\n", str1);
   printf("str2: %s\n", str2);
   printf("str3: %s\n", str3);

   ft_memmove(str2, str1, 5);
   ft_memmove(str3, str1, 5);

   printf("\nAfter memmove:\n");
   printf("str1: %s\n", str1);
   printf("str2: %s\n", str2);
   printf("str3: %s\n", str3);

   return 0;
}*/