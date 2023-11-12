/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:44:22 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:44:26 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int count(int nb) {
    int counter = 0;

    if (nb == 0)
        return 1;

    if (nb < 0) {
        nb = -nb;
        counter++; // Account for the negative sign
    }

    while (nb > 0) {
        counter++;
        nb /= 10;
    }
    return counter;
}

char *ft_itoa(int n) {
    int len = count(n);
    char *str = (char *)malloc(sizeof(char) * (len + 1)); // +1 for the null terminator
    if (!str)
        return NULL;

    str[len--] = '\0'; // Set the null terminator at the end

    if (n < 0) {
        str[0] = '-';
        n = -n;
    }

    if (n == 0)
        str[0] = '0';

    while (n > 0) {
        str[len--] = (n % 10) + '0';
        n /= 10;
    }

    return str;
}

/*
#include <stdio.h>

int	main(void)
{
    printf("%s\n", ft_itoa(1521515));
}
*/