/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_all.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 15:02:59 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/07 15:04:58 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_all(char **s, int i)
{
	i = i - 1;
	while (i > 0)
		free(s[i--]);
	free(s);
	return(0);
}