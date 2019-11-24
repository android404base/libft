/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 14:08:13 by ydag           #+#    #+#                */
/*   Updated: 2019/11/23 13:02:03 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_overflow(long res, const char *str, int i, int sign)
{
	long	border;

	border = 9223372036854775807 / 10;
	if ((res > border ||
		(res == border && (str[i] - '0') > 7)) && sign == 1)
		return (-1);
	else if ((res > border ||
			(res == border && (str[i] - '0') > 8)) && sign == -1)
		return (0);
	else
		return (1);
}

int				ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	if (*str == 0)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] != '\0')
	{
		if (check_overflow(res, str, i, sign) == 1)
		{
			if (ft_isdigit(str[i]) == 0)
				return (res * sign);
			res = res * 10 + str[i++] - '0';
		}
		else
			return (check_overflow(res, str, i, sign));
	}
	return ((int)res * sign);
}
