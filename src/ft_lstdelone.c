/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 11:17:40 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/09 12:27:37 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *alst, void (*del)(void *))
{
    t_list *tmp;

    tmp = alst->next;
    alst->next = NULL;
	del((alst)->content);
	free(alst);
	alst = NULL;
}