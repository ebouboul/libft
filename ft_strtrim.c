/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:43:43 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:43:44 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    start;
    size_t    end;
    char    *trimmed;

    // Check if either input string is NULL
    if (!*s1 || !*set)
        return (NULL);

    // Find the starting index by skipping characters in 'set'
    start = 0;
    while (s1[start]  &&  *set != s1[start])  
        start++;

    // If the entire string is trimmed, return an empty string
    if (s1[start] == '\0')
        return (strdup(""));

    // Find the ending index by skipping characters in 'set' from the end
    end = strlen(s1) - 1;
    while (end > start &&  *set != s1[end] )
        end--;

    // Calculate the length of the trimmed string
    size_t len = end - start + 1;

    // Allocate memory for the trimmed string
    trimmed = (char *)malloc(sizeof(char) * (len + 1)); // +1 for the null terminator
    if (!trimmed)
        return (NULL);

    // Copy the trimmed portion to the new string
   strncpy(trimmed, s1 + start, len + 1);

    return (trimmed);
}
