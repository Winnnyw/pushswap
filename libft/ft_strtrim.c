/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:55:36 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/05 18:09:46 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*sf;

	end = ft_strlen(s1) - 1;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
	{
		if (end <= start)
			return (ft_strdup(""));
		end--;
	}
	sf = ft_substr(s1, start, (end - start + 1));
	return (sf);
}
/*
int main(void)
{
	char *choco = "  \t \t \n   \n\n\n\t";
	char *lat = " \n\t";
	printf("%s\n",ft_strtrim(choco, lat));
}*/