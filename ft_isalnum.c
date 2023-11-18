/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:37:59 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/03 21:58:34 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
#include <stdio.h>

int	main(void)
{
	char a = 'a';
	printf("%d\n", ft_isalnum(a));
	char b = '5';
	printf("%d", ft_isalnum(b));
}*/