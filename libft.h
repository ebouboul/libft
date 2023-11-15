/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:53:53 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/07 17:53:55 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
	#include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include <stddef.h>

    char *ft_substr(char const *s, unsigned int start, size_t len);
    size_t	ft_strlen(const char *s);
    size_t strlcpy(char *dest, const char *src, size_t size);
    size_t ft_strlcat(char *dst, const char *src, size_t size);
    void ft_putstr_fd(char *s, int fd);
    void ft_putchar_fd(char c, int fd);

#endif