/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:23:53 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 14:51:00 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_str(int n, int *digits, int *is_neg)
{
	char	*str;

	*digits = 1;
	*is_neg = 0;
	if (n < 0)
	{
		(*digits)++;
		*is_neg = 1;
	}
	while (n / 10)
	{
		(*digits)++;
		n = n / 10;
	}
	str = (char *)malloc(sizeof(*str) * (*digits + 1));
	if (str == 0)
		return (0);
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		digit_count;
	int		is_neg;

	if ((str = create_str(n, &digit_count, &is_neg)) == NULL)
		return (0);
	i = 0;
	str[digit_count--] = '\0';
	while (digit_count >= 0)
	{
		if (n < 0)
		{
			str[0] = '-';
			str[digit_count] = -(n % 10) + '0';
			n = -(n / 10);
		}
		else if (!(is_neg == 1 && digit_count == 0))
		{
			str[digit_count] = n % 10 + '0';
			n = n / 10;
		}
		digit_count--;
	}
	return (str);
}
