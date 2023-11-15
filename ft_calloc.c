/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:47:01 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:47:03 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * sizeof(size));
	ft_bzero(str, size);
	return (str);
}
/*
#include <stdio.h>

int	main(void) {
    size_t count = 5;
    size_t size = 10;
    
    void *ptr = ft_calloc(count, size);
    
    if (ptr) {
        printf("Memory allocation successful\n");
        free(ptr);
    } else {
        printf("Memory allocation failed\n");
    }
    return (0);
}*/