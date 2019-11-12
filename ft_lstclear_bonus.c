/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:27:34 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 14:27:50 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
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
