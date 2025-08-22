/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:59:15 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/04 22:50:24 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p_src;
	char	*p_dest;

	p_dest = (char *)dest;
	p_src = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	if (p_dest > p_src && p_dest < p_src + n)
	{
		p_dest += n;
		p_src += n;
		while (n--)
			*--p_dest = *--p_src;
	}
	else
	{
		while (n--)
			*p_dest++ = *p_src++;
	}
	return (dest);
}
