/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 12:59:34 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/09 13:05:59 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *iter;

    iter = lst;
    while (iter != NULL)
    {
        f(iter->content);
        iter = iter->next;
    }
}