/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 13:51:23 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/07 15:24:54 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	**ft_split(char const *s, char c)
{
	int		word_counts;
	char	**result;
	char	*current_word;
	char	*s1;
	int		i;
	int		j;

	s1 = (char *)s;
	if(s == 0)
		return (0);
	if((word_counts = ft_wrdcntr(s1, c)) == 0)
		return (0);
	if((result = ft_build(s1, word_counts, c)) == 0)
		return (0);
	i = 0;
	while (i < word_counts && result[i] != NULL)
	{
		j = 0;
		current_word = ft_findword(s1, c, (i + 1));
		while ((current_word[j] != c) && (current_word[j] != '\0'))
		{
			result[i][j] = current_word[j];
			j++;
		}
		result[i++][j] = '\0';
	}
	return (result);
}