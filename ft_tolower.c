/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:43:29 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:43:31 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c - ('A' - 'a');
		return (c);
	}
	return (c);
}

/*
#include <stdio.h>


int	main(void) {
    char inputChar = 'L';  
    char lowercaseChar = ft_tolower(inputChar);

    printf("Original Character: %c\n", inputChar);
    printf("Lowercase Character: %c\n", lowercaseChar);

    return (0);
} */