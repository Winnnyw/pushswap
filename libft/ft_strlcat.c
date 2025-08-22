/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:21:40 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/01 18:39:34 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srcl;
	size_t	destl;

	srcl = ft_strlen(src);
	destl = ft_strlen(dest);
	i = destl;
	j = 0;
	if (size == 0)
		return (srcl);
	if (size <= destl)
		return (size + srcl);
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (destl + srcl);
}
