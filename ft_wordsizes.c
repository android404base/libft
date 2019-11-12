/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wordsizes.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:21:43 by ydag           #+#    #+#                */
/*   Updated: 2019/11/08 14:21:56 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_wordsizes(char *s, int word_counts, char c)
{
	int		*w_sizes;
	int		w_size;
	int		i;
	int		j;
	char	*current_word;

	if ((w_sizes = (int *)malloc(sizeof(*w_sizes) * word_counts)) == 0)
		return (0);
	i = 0;
	while (i < word_counts)
	{
		w_size = 0;
		j = 0;
		current_word = ft_findword(s, c, (i + 1));
		while ((current_word[j] != c) && (current_word[j] != '\0'))
		{
			w_size++;
			j++;
		}
		w_sizes[i] = w_size;
		i++;
	}
	return (w_sizes);
}
