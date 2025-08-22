/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:41:11 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/02 17:31:31 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot;
	void	*str;

	tot = count * size;
	if (count != 0 && tot / count != size)
		return (NULL);
	str = malloc(tot);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, tot);
	return (str);
}
