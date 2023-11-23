/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:45:26 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/16 00:27:31 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    if(fd < 0)
        return;
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
#include <stdio.h>


int	main(void)
{
	char	c;
	int		fd;

     c = 'a';
    fd = open("file.txt",O_CREAT | O_RDWR,0666);
    
    if(fd != EOF)
        printf("succes\n");
    
    printf("%d\n",fd);
    ft_putchar_fd(c,fd);
    close(fd);
}
*/
