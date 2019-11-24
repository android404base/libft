/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 16:07:09 by ydag           #+#    #+#                */
/*   Updated: 2019/11/23 13:02:47 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = malloc(num * size);
	if (str == 0)
		return (0);
	while (i < num * size)
	{
		((char*)str)[i] = 0;
		i++;
	}
	return (str);
}
