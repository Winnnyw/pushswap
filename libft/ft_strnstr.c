/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:39:20 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/04 22:52:59 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *hays,	const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)hays);
	i = 0;
	while (hays[i])
	{
		j = 0;
		while (hays[i + j] == needle[j] && (i + j) < n)
		{
			if (hays[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&hays[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)hays + i);
		i++;
	}
	return (0);
}
