/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:46:13 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:46:15 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }

    return 0;
}

/*
int main() {
    const char str1[] = "hello";
    const char str2[] = "hello world";
    const char str3[] = "hello world";
    const char str4[] = "world";

    printf("%d\n", ft_memcmp(str1, str2, sizeof(str1))); 
    printf("%d\n", ft_memcmp(str2, str3, sizeof(str2))); 
    printf("%d\n", ft_memcmp(str1, str4, sizeof(str1))); 

    return 0;
}
*/
