/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:18:17 by ydag           #+#    #+#                */
/*   Updated: 2019/11/14 17:50:32 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;

	d = malloc((ft_strlen(s)) * sizeof(*d) + 1);
	if (d == 0)
		return (0);
	d = ft_strcpy(d, s);
	return (d);
}
