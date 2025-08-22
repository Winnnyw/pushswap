/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:59:07 by rokilic           #+#    #+#             */
/*   Updated: 2025/05/05 19:02:48 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	if (!str || !fd)
		return ;
	i = 0;
	while (str[i])
	{	
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
