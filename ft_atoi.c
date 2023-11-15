/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:46:27 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:46:31 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *nptr)
{
    int result;
    result = 0;
    int sign;
    sign = 1;
    while ((*nptr >= 'A' && *nptr <= 'z') || (*nptr == 32) )
    {
        nptr++;
    }
    if (*nptr == '+' || *nptr == '-')
    {
        if (*nptr == '-')
        {
            sign = -1;
        }
        nptr++;
    }
        while(*nptr >= '0' && *nptr <= '9')
    {
        result = result * 10 + (*nptr - 48);
        *nptr++;
    }
    return(result * sign);
}

/*
#include <stdio.h>


int main() {
    const char *str = "12345"; 
    int value = atoi(str); 

    printf("Converted integer: %d\n", value);

    return 0;
}

*/