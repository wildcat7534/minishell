/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:47:46 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/03 19:49:24 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t	i;

    i = 0;
    while (s[i] != '\0')
    {
        if (ft_strchr(reject, s[i]) != NULL)
            return (i);
        i++;
    }
    return (i);
}
