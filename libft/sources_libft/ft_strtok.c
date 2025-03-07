/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:11:42 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/03 20:12:49 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// The strtok() function breaks a string into a sequence of zero or more nonempty tokens. 
// On the first call to strtok() the string to be parsed should be specified in str. 
// In each subsequent call that should parse the same string, str must be NULL. 
// The delim argument specifies a set of bytes that delimit the tokens in the parsed string. 
// The caller may specify different strings in delim in successive calls that parse the same string.

char	*ft_strtok(char *str, const char *delim)
{
    static char	*last = NULL;
    char		*token;
    size_t		len;

    if (str == NULL && last == NULL)
        return (NULL);
    if (str == NULL)
        str = last;
    str += ft_strspn(str, delim);
    if (*str == '\0')
    {
        last = NULL;
        return (NULL);
    }
    token = str;
    len = ft_strcspn(str, delim);
    str += len;
    if (*str == '\0')
        last = NULL;
    else
    {
        *str = '\0';
        last = str + 1;
    }
    return (token);
}
