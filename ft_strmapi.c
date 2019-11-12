/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:26:13 by ydag           #+#    #+#                */
/*   Updated: 2019/11/08 14:26:27 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	char	*s2;
	size_t	len;
	int		i;

	s1 = (char *)s;
	if (s1 == 0)
		return (0);
	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1);
	if (s2 == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = f(i, s1[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
