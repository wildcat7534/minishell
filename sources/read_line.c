/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:21:15 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/03 19:48:34 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	read_line(void)
{
    char	*line;

    while (0xCE77)
    {
        line = readline(PROMPT);
        if (line == NULL)
            break ;
        if (line[0] != '\0')
            add_history(line);
        free(line);
    }
} 