/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 13:07:54 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/09 13:56:58 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*node;
	t_list	*root;

	root = NULL;
	if (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
        del(lst->content);
		root = node;
		while (lst->next != NULL)
		{
            lst = lst->next;
			node->next = ft_lstnew(f(lst->content));
            del(lst->content);
			node = node->next;
		}
        free(lst);
        free(node);
	}
	return (root);
}