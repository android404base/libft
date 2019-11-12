/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:55:51 by ydag           #+#    #+#                */
/*   Updated: 2019/10/30 12:07:09 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned	char *src;
	unsigned	char data;

	src = (unsigned char *)s;
	data = (unsigned char)c;
	while (n > 0)
	{
		if (*src == data)
			return (src);
		src++;
		n--;
	}
	return (0);
}
