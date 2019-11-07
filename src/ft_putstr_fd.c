/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 19:29:25 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/07 20:29:13 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != 0)
	{
		while (*s != '\0')
		{
			ft_putchar_fd(*s,fd);
			s++;
		}
	}
}