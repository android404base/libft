/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:29:35 by ydag           #+#    #+#                */
/*   Updated: 2019/11/23 13:46:30 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*next;

	if (!lst || !f || !del)
		return (0);
	head = ft_lstnew(f(lst->content));
	lst = lst->next;
	new = head;
	if (!head)
		return (0);
	while (lst)
	{
		next = ft_lstnew(f(lst->content));
		if (!next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		new->next = next;
		new = next;
		lst = lst->next;
	}
	return (head);
}
