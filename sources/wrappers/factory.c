/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:02:56 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/13 11:27:01 by cmassol          ###   ########.fr       */
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

int     *gc_malloc(t_l_ptr *list_ptr, int size)
{
    t_l_ptr   *new;
    t_l_ptr   *tmp;

    new = malloc(sizeof (t_l_ptr));
    if (new == NULL)
    {
        printf("Error: malloc failed\n");
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    if (list_ptr != NULL)
    {
        list_ptr = new;
        new->prev = NULL;
    }
    tmp = list_ptr;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
    new->prev = tmp;
    new->next = NULL;
    new->ptr = malloc(size);
    return (new->ptr);
}
