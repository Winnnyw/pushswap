/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:27:17 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/05 12:50:08 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include<stdio.h>
#include <string.h>
int	main()
{
	const char *e = "teste";
	int	c = 1024;
	printf("MINE %s\n", ft_strrchr(e, c));
	printf("OG %s\n", strrchr(e, c));
	//printf("%c", c);
}*/