/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 10:25:54 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/09 10:31:33 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *root;

    root = (t_list *)malloc(sizeof(t_list));
    if (root == NULL)
        return (NULL);
    root->content = content;
    root->next = NULL;
    return (root);
}