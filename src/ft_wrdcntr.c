/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrdcntr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 13:56:32 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/07 14:01:36 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrdcntr(char *s, char c)
{
	char prv;
	int  word_counts;

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
		s++;
	}
	return (word_counts);
}