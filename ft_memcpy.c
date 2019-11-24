/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 17:37:15 by ydag           #+#    #+#                */
/*   Updated: 2019/11/23 13:05:08 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned		char *d;
	unsigned const	char *s;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (n && (dest != 0 || src != 0))
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
