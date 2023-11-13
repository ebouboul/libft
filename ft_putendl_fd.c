/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:46:09 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:46:11 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;
    
    i = 0;
    if (!s)
        return(0);
    ft_putstr_fd(s,fd);
    write(fd,"\n",1);
}

