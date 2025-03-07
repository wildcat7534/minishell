/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:32:02 by cmassol           #+#    #+#             */
/*   Updated: 2025/02/26 17:37:56 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putstr(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		s = "(null)";
		while (s[i])
			ft_putchar(s[i++], fd);
		return ;
	}
	while (s[i])
		ft_putchar(s[i++], fd);
}
