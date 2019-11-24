/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:41:16 by ydag           #+#    #+#                */
/*   Updated: 2019/11/23 13:47:57 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (dest > 0)
	{
		if (src < dest)
		{
			i = n - 1;
			if (((unsigned char *)dest)[i] != ((unsigned char *)src)[i])
				((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
		else
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
		n--;
	}
	return (dest);
}
