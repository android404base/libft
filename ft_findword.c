/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_findword.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:17:15 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 17:23:25 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
