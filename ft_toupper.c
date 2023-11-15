/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:43:09 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:43:13 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - ('a' - 'A');
		return (c);
	}
	return (c);
}

/*
#include <stdio.h>


int	main(void) {
    char lowercaseChar = 'a';
    char uppercaseChar = ft_toupper(lowercaseChar);

    printf("Original character: %c\n", lowercaseChar);
    printf("Uppercase character: %c\n", uppercaseChar);

    return (0);
}

*/