/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 10:38:09 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/09 10:41:35 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     counter;

    counter = 0;
    if (lst == NULL)
        return (counter);
    while (lst->next != NULL)
    {
        lst = lst->next;
        counter++;
    }
    return (++counter);
}