/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 10:20:04 by ydag           #+#    #+#                */
/*   Updated: 2019/11/04 13:20:51 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned		char *d;
	unsigned const	char *s;
	unsigned		char sv;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	sv = (unsigned char)c;
	while (n-- && (src != 0 || dest != 0))
	{
		*d++ = *s++;
		if (*(d - 1) == sv)
			return (d);
	}
	return (0);
}
