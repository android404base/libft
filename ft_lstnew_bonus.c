/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 14:18:53 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 14:20:14 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *root;

	root = (t_list *)malloc(sizeof(t_list));
	if (root == NULL)
		return (NULL);
	root->content = content;
	root->next = NULL;
	return (root);
}
