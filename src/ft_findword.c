/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_findword.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:45:48 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/07 15:23:15 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_findword(char *s, char c, int n)
{
	char	prv;
	int		word_counts;

	word_counts = 0;
	prv = c;
	while (*s != '\0')
	{
		if (*s == c)
		{
			if (prv != c)
				prv = *s;
		}
		else
		{
			if (prv == c)
			{
				word_counts += 1;
				prv = *s;
			}
		}
		if (word_counts == n)
			return (s);
		s++;
	}
	return (0);
}