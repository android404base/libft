/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:07:49 by ydag           #+#    #+#                */
/*   Updated: 2019/10/29 16:28:31 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *root;
	unsigned char data;

	root = (unsigned char *)s;
	data = (unsigned char)c;
	while (n > 0)
	{
		*root = data;
		root++;
		n--;
	}
	return (s);
}
