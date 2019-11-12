/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wrdcntr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:22:44 by ydag           #+#    #+#                */
/*   Updated: 2019/11/11 17:27:30 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_wrdcntr(char *s, char c)
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
		s++;
	}
	return (word_counts);
}
