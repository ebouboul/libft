/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:43:14 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/18 00:43:16 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *newf;
    if(!lst || !f ||!del)
    return(NULL);
    new = NULL;
    while(lst)
    {

        newf = ft_lstnew(f(lst->content));
        if(!newf)
        {
        ft_lstclear(&new, del);
        return(NULL);
        }
    ft_lstadd_back(&new, newf);
    lst = lst->next;
    }
    return(new);
}