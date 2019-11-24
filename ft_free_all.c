/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_all.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:18:23 by ydag           #+#    #+#                */
/*   Updated: 2019/11/08 14:18:34 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_all(char **s, int i)
{
	i = i - 1;
	while (i > 0)
		free(s[i--]);
	free(s);
	return (0);
}