/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_build.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:35:17 by ydag           #+#    #+#                */
/*   Updated: 2019/11/08 14:35:24 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_build(char *s, int word_counts, char c)
{
	char	**res;
	int		i;
	int		*w_sizes;

	if ((w_sizes = ft_wordsizes(s, word_counts, c)) == 0)
		return (0);
	if ((res = (char **)malloc(sizeof(*res) * (word_counts + 1))) == 0)
		return (0);
	i = 0;
	while (i < word_counts)
	{
		if ((res[i] = (char *)malloc(sizeof(**res) * (w_sizes[i] + 1))) == 0)
			return (ft_free_all(res, i));
		i++;
	}
	res[i] = NULL;
	free(w_sizes);
	return (res);
}
