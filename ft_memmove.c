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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (src == dest)
		return (dest);
	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void) {
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

   return (0);
}*/