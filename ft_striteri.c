/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:45:04 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:45:05 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
/*
#include <stdio.h>

// Sample function that increments characters by their index
void	increment_char(unsigned int index, char *c) {
    *c += (char)index;
}

int	main(void) {
    char test_string[] = "Hello, World!";
    
    printf("Original String: %s\n", test_string);

    // Applying the increment_char function to each character in the string
    ft_striteri(test_string, &increment_char);

    printf("Modified String: %s\n", test_string);

    return (0);
}
*/