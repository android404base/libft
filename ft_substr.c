/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:01:59 by ydag           #+#    #+#                */
/*   Updated: 2019/11/06 13:16:38 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss1;
	int		i;

	if (len <= 0 || s == 0)
		return (0);
	ss1 = (char *)malloc(sizeof(char) * (len + 1));
	if (ss1 == 0)
		return (0);
	i = 0;
	while (len > 0)
	{
		ss1[i++] = s[start++];
		len--;
	}
	ss1[i] = '\0';
	return (ss1);
}
