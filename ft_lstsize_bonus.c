/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:23:11 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 14:23:38 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		counter;

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
