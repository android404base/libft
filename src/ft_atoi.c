/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 14:08:13 by ydag           #+#    #+#                */
/*   Updated: 2019/11/04 16:01:38 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
int		check_overflow(long res, const char *str, int i, int sign)
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

int		ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	if (*str == 0)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] != '\0')
	{
		if (check_overflow(res, str, i, sign) == 1)
		{
			if (ft_isdigit(str[i]) == 0)
				return (res * sign);
			res = res * 10 + str[i] - '0';
			i++;
		}
		else
			return (check_overflow(res, str, i, sign));
	}
	return ((int)res * sign);
}

int main() 
{ 
    char str[] = "21474545454545454545834647"; 
    int val = ft_atoi(str); 
	 int val2 = atoi(str); 
    printf("%d - %d", val,val2); 
    return 0; 
}
