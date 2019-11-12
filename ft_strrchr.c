/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 13:59:58 by ydag           #+#    #+#                */
/*   Updated: 2019/11/04 13:30:39 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	char	data;

	src = (char *)s + ft_strlen(s);
	data = (char)c;
	while (src >= s)
	{
		if (*src == data)
			return (src);
		src--;
	}
	return (0);
}
