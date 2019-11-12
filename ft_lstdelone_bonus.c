/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:26:34 by ydag           #+#    #+#                */
/*   Updated: 2019/11/12 13:04:45 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *alst, void (*del)(void *))
{
	t_list *tmp;

	tmp = NULL;
	if (alst)
	{
		tmp = alst->next;
		del(alst->content);
		alst->next = NULL;
		free(alst);
	}
}
