/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:01:59 by ydag           #+#    #+#                */
/*   Updated: 2019/11/23 13:38:18 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss1;
	int		i;

	if (!s)
		return (0);
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	ss1 = (char *)malloc(sizeof(char) * (len) + 1);
	if (!ss1)
		return (0);
	i = 0;
	while (len && s[start])
	{
		ss1[i] = s[start];
		i++;
		start++;
		len--;
	}
	ss1[i] = '\0';
	return (ss1);
}
