/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:24:21 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/21 17:51:15 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	get_bit(int number, int index)
{
	return (((1 << index) & number) >> index);
}

void	radix(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	while (!is_sorted(*stack_a) && i < 32)
	{
		j = 0;
		size = ft_lstsize(*stack_a);
		while (j < size)
		{
			if (get_bit(*(int *)((*stack_a)->content), i))
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b != NULL)
		{
			pa(stack_b, stack_a);
		}
		i++;
	}
}

bool	is_sorted(t_list *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (*(int *)stack_a->content > *(int *)stack_a->next->content)
			return (false);
		stack_a = stack_a->next;
	}
	return (true);
}
