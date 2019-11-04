/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:53:41 by ydag           #+#    #+#                */
/*   Updated: 2019/10/31 19:02:04 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *src;
	char data;

	src = (char *)s;
	data = (char)c;
	while (*src && !(*src == data))
		src++;
	return ((*src == data) ? src : 0);
}
