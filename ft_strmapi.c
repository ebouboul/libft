/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:44:46 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:44:48 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = malloc(sizeof(char) * strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
static char	helper(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - 'a' + 'A');
    }
    return (c);
}
#include <stdio.h>

int main ()
{
	char const	*s;
	char		*str;

    s = "hellohcfhy554'93'SA";
    str = ft_strmapi(s,helper);
    printf("%s",str);
}
*/