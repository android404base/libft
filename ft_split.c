/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 14:19:19 by ydag           #+#    #+#                */
/*   Updated: 2019/11/14 19:52:08 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_all(char **s, int i)
{
	i = i - 1;
	while (i > 0)
		free(s[i--]);
	free(s);
	return (0);
}

static char	*build_word(char const *str, char c)
{
	char	*word;
	int		i;

	word = NULL;
	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	i = 0;
	while (str[i] != c && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	build_arr(char **array, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			array[i] = build_word(s, c);
			if (!array[i])
				return (free_all(array, i - 1));
			i++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	array[i] = NULL;
	return (1);
}

static int	counter(char const *s, char c)
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

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		wc;

	if (s == NULL)
		return (0);
	wc = counter(s, c);
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if (res == NULL)
		return (0);
	if (build_arr(res, s, c) == 0)
		return (0);
	else
		return (res);
}
