/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:30:13 by ydag           #+#    #+#                */
/*   Updated: 2019/11/08 14:30:27 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n / 10)
			ft_putnbr_fd(-(n / 10), fd);
		n = -(n % 10) + '0';
		ft_putchar_fd(n, fd);
	}
	else
	{
		if (n / 10)
			ft_putnbr_fd((n / 10), fd);
		n = (n % 10) + '0';
		ft_putchar_fd(n, fd);
	}
}
