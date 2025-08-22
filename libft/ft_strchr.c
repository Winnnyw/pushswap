/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:08:15 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/15 21:48:57 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	find;

	find = (unsigned char)c;
	i = 0;
	while (s && s[i])
	{
		if (s[i] == (char)find)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == find)
		return ((char *)(s + i));
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>
int	main()
{
	const char s[] = "abcdefagh";
	int	c = 65;
	printf("OG %s\n Mine %s\n", strchr(s, c), ft_strchr(s, c));
	printf("%s\n",ft_strchr(((void*)0), '\0'));
	return (0);
}*/