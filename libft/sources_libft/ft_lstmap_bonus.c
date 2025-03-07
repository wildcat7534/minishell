/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:10:01 by cmassol           #+#    #+#             */
/*   Updated: 2025/02/26 20:10:37 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_lst;
    t_list	*new_elem;

    if (!lst || !f)
        return (NULL);
    new_lst = NULL;
    while (lst)
    {
        new_elem = ft_lstnew(f(lst->content));
        if (!new_elem)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, new_elem);
        lst = lst->next;
    }
    return (new_lst);
}
