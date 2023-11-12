/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:42:38 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:42:41 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (s == NULL) {
        return NULL;  // Handle invalid input
    }

    size_t s_length = 0;
    while (s[s_length] != '\0') {
        s_length++;
    }

    if (start >= s_length) {
        return NULL;  // Start index is out of range
    }

    size_t substr_length = len;

    if (start + len > s_length) {
        substr_length = s_length - start;  // Adjust length if it exceeds the string length
    }

    char *substr = (char *)malloc(substr_length + 1);  // +1 for the null-terminator
    if (substr == NULL) {
        return NULL;  // Memory allocation failed
    }

    size_t i = 0;
    while (i < substr_length) {
        substr[i] = s[start + i];
        i++;
    }

    substr[substr_length] = '\0';  // Null-terminate the substring

    return substr;
}


/*
int main() {
    const char *input_string = "hello honey";
    unsigned int start_index = 6;
    size_t substring_length = 5;

    char *result = ft_substr(input_string, start_index, substring_length);

    if (result != NULL) {
        printf("Original String: %s\n", input_string);
        printf("Substring from index %u with length %zu: %s\n", start_index, substring_length, result);

        // Don't forget to free the allocated memory
        free(result);
    } else {
        printf("Error: Unable to create substring.\n");
    }

    return 0;
}
*/