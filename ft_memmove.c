/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:41:16 by ydag           #+#    #+#                */
/*   Updated: 2019/11/04 13:24:48 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned		char *d;
	unsigned const	char *s;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (d < s)
	{
		while (n > 0 && (dest != 0 || src != 0))
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n > 0 && (dest != 0 || src != 0))
		{
			*--d = *--s;
			n--;
		}
	}
	return (dest);
}
