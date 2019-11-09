/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 10:47:23 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/09 11:14:41 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *iter;

    iter = *alst;
    if (*alst == NULL)
        *alst = new;
    else
    {
        while (iter->next != NULL)
            iter = iter->next;
        iter->next = new;
    }
}