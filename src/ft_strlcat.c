/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:39:09 by ydag           #+#    #+#                */
/*   Updated: 2019/10/30 13:46:13 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_size;
	size_t	out;

	d_size = ft_strlen(dst);
	out = FT_MIN(size, d_size) + ft_strlen(src);
	if (size > d_size)
	{
		dst += d_size;
		size -= d_size;
		while (*src && size-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (out);
}
