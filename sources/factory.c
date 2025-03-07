/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:02:56 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/03 19:48:46 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

// WRAPPER
//Getter for the current working directory
void    Getcwd(char *buf, size_t size)
{
    if (getcwd(buf, size) == NULL)
    {
        printf("Error: getcwd failed\n");
        perror("getcwd");
        exit(EXIT_FAILURE);
    }
}

void    safe_malloc(void *ptr, size_t size)
{
    ptr = malloc(size);
    if (ptr == NULL)
    {
        printf("Error: malloc failed\n");
        perror("malloc");
        exit(EXIT_FAILURE);
    }
}