/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 17:10:55 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 17:22:46 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char *root;

	root = (unsigned char *)s;
	while (n > 0)
	{
		*root = '\0';
		root++;
		n--;
	}
	return (0);
}
