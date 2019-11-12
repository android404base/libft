/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:29:35 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 16:29:41 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*root;
	t_list	*tmp;

	root = NULL;
	if (lst != NULL)
	{
		root = ft_lstnew((*f)(lst->content));
		lst = lst->next;
		node = root;
		while (lst != NULL)
		{
			tmp = ft_lstnew((*f)(lst->content));
			if (!tmp)
			{
				ft_lstclear(&node, del);
				return (NULL);
			}
			node->next = tmp;
			node = node->next;
			lst = lst->next;
		}
		return (root);
	}
	return (NULL);
}
