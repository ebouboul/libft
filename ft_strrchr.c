/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:43:54 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 17:43:56 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;
	int		cnt;

	a = (char *)s;
	i = 0;
	cnt = 0;
	while (a[i] != '\0')
	{
		if (a[i] == c)
			cnt = i;
		i++;
	}
	if (cnt == 0 && a[0] != c)
		return (NULL);
	else
	{
		a = &a[cnt];
		return (a);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "hello";
	printf("%s", ft_strrchr(str,'l'));
}
*/