/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:35:03 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/06 18:15:24 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnum(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb <= 0)
		count = 1;
	while (nb)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*tab;
	long	nb;
	int		len;

	nb = n;
	len = ft_countnum(n);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	len--;
	if (nb == 0)
		tab[0] = '0';
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		tab[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (tab);
}
