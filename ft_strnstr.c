/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:22:00 by ydag           #+#    #+#                */
/*   Updated: 2019/11/14 17:31:05 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char				*b;
	size_t				lit_len;
	size_t				i;
	size_t				j;

	b = (char *)big;
	if ((lit_len = ft_strlen(little)) == 0)
		return (b);
	i = 0;
	if (len == 0)
		return (0);
	while (b[i] != '\0' && i <= len - lit_len)
	{
		j = 0;
		while (little[j] && little[j] == b[i + j])
			j++;
		if (j == lit_len)
			return (&b[i]);
		i++;
	}
	return (0);
}
