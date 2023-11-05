/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:44:19 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:44:23 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


const char *ft_strchr(const char *s, int c) {
    while (*s)
  
     {
        if (*s == (char)c) {
            return s;
        }
        s++;
    }

    return 0;
}

/*
#include <stdio.h>


int main() {
    const char *str = "Hello, World!";
    char searchChar = 'W';

    const char *result = ft_strchr(str, searchChar);

    if (result != 0) {
        printf("Found '%c' at position %td\n", searchChar, result - str);
    } else {
        printf("'%c' not found in the string\n", searchChar);
    }

    return 0;
}
*/