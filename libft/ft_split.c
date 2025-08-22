/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 22:53:50 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/16 05:57:12 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	size_t	count;
	size_t	in_word;
	size_t	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static void	ft_free_split(char **res, size_t j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
}

static int	ft_extract_word(char **res, char const *s, char c)
{
	size_t			len;
	size_t			i;
	size_t			j;
	unsigned int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			len = i - start;
			res[j] = ft_substr(s, start, len);
			if (!res[j])
				return (ft_free_split(res, j), 0);
			j++;
		}
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_word(s, c);
	res = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!ft_extract_word(res, s, c))
		return (NULL);
	return (res);
}
