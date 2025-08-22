/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:54:35 by rokilic           #+#    #+#             */
/*   Updated: 2025/04/29 13:36:05 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha (c) || ft_isdigit (c))
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>

int main(void)
{
	char c = 'a';
	char a = '5';
	char b = '#';
	printf("%d\n%d\n%d",ft_isalnum(b), ft_isalnum(c),ft_isalnum(a));
	return (0);
}*/