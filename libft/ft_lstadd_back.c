/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:49:09 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/20 17:46:39 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	new->next = NULL;
	if (!(*lst))
	{
		*lst = new;
	}
	else
	{
		tmp = (*lst);
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
