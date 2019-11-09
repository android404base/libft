/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 12:29:27 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/09 12:42:33 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *iter;
    t_list *tmp;

    iter = *lst;
    tmp = NULL;
    while (iter != NULL)
    {
        del(iter->content);
        tmp = iter->next;
        free(iter);
        iter = tmp;
    }
    if (iter != NULL)
        free(iter);
    *lst = NULL;
}