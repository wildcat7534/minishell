/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_charset.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:27:32 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/13 01:31:51 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strchr_charset(const char *s, const char *charset)
{
    while (*s)
    {
        if (ft_strchr(charset, *s))
            return ((char *)s);
        s++;
    }
    if (ft_strchr(charset, '\0'))
        return ((char *)s);
    return (NULL);
}