/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 14:08:59 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 17:29:27 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*make_place(size_t size)
{
	return ((char *)malloc(sizeof(char) * (size + 1)));
}

static int	check(char s, char const *set)
{
	if (*set == '\0')
		return (0);
	return ((s == *set ? 1 : check(s, ++set)));
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	finish;

	if (s1 == 0)
		return (NULL);
	i = 0;
	start = 0;
	finish = ft_strlen(s1);
	while (check(s1[start], set))
		start++;
	while (finish && check(s1[finish - 1], set))
		finish--;
	if ((result = make_place((finish > start) ? (finish - start) : 0)))
	{
		while (start < finish)
			result[i++] = s1[start++];
		result[i] = '\0';
	}
	return (result);
}
