/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:24:21 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/22 18:39:51 by rokilic          ###   ########.fr       */
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
			if (get_bit(((t_node *)(*stack_a)->content)->index, i))
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
		if (((t_node *)stack_a->content)->n > \
			((t_node *)stack_a->next->content)->n)
			return (false);
		stack_a = stack_a->next;
	}
	return (true);
}

void	sort(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = ft_lstsize(*stack_a);
	if (i == 2)
		sa(stack_a);
	else if (i == 3)
		sort_3(stack_a);
	else if (i <= 5)
		sort_5(stack_a, stack_b);
	else
		radix(stack_a, stack_b);
}
