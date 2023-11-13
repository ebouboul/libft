/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:45:52 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:45:55 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    
    i = 0;
    if (!s)
        return (0);
    while (s[i])
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
}