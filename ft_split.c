/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:19:19 by ydag           #+#    #+#                */
/*   Updated: 2019/11/08 14:21:06 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		word_counts;
	char	**result;
	char	*current_word;
	int		i;
	int		j;

	if ((char *)s == 0)
		return (0);
	if ((word_counts = ft_wrdcntr((char *)s, c)) == 0)
		return (0);
	if ((result = ft_build((char *)s, word_counts, c)) == 0)
		return (0);
	i = 0;
	while (i < word_counts && result[i] != NULL)
	{
		j = 0;
		current_word = ft_findword((char *)s, c, (i + 1));
		while ((current_word[j] != c) && (current_word[j] != '\0'))
		{
			result[i][j] = current_word[j];
			j++;
		}
		result[i++][j] = '\0';
	}
	return (result);
}
