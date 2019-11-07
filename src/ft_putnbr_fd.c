/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 19:33:41 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/07 19:39:34 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
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