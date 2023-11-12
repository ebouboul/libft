/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:44:02 by ebouboul          #+#    #+#             */
/*   Updated: 2023/11/09 23:44:05 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int countwords(const char *str, char c) {
    int counter = 0;
    int i = 0;
    while (str[i] != '\0') {
        while (str[i] == c)
            i++;
        if (str[i] != '\0') {
            counter++;
            while (str[i] != '\0' && str[i] != c)
                i++;
        }
    }
    return counter;
}

static char *copyword(const char *s, int start, int len) {
    char *word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;

    int i = 0;
    while (len > 0) {
        word[i] = s[start];
        i++;
        start++;
        len--;
    }
    word[i] = '\0';

    return word;
}

char **ft_split(char const *s, char c) {
    if (!s)
        return NULL;

    int numwords = countwords(s, c);
    printf("%d\n", numwords);

    char **s2 = (char **)malloc(sizeof(char *) * (numwords + 1));
    if (!s2)
        return NULL;

    int i = 0;
    int word = 0;
    while (word < numwords) {
        while (s[i] && s[i] == c)
            i++;
        
        int wordlen = 0;
        while (s[i] && s[i] != c) {
            i++;
            wordlen++;
        }
        
        s2[word] = copyword(s, i - wordlen, wordlen);
        if (!s2[word]) {
            int j = 0;
            while (j < word) {
                free(s2[j]);
                j++;
            }
            free(s2);
            return NULL;
        }

        word++;
    }
    s2[word] = NULL;

    return s2;
}


int main() {
    const char *input_string = "hi0hello0wohrld";
    char **result = ft_split(input_string, '0');
    
    if (result != NULL) {
        printf("Split Strings:\n");
        int i = 0;
        while (result[i] != NULL) {
            printf("%s\n", result[i]);
            i++;
        }

        // Free the allocated memory
        i = 0;
        while (result[i] != NULL) {
            free(result[i]);
            i++;
        }
        free(result);
    } else {
        printf("Error: Unable to split string.\n");
    }

    return 0;
}