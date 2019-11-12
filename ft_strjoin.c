/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:50:33 by ydag           #+#    #+#                */
/*   Updated: 2019/11/06 14:05:46 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cs;
	size_t	len;
	int		i;
	int		j;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	cs = (char *)malloc(sizeof(char) * len);
	if (cs == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
		cs[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		cs[i++] = s2[j++];
	cs[i] = '\0';
	return (cs);
}
