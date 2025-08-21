/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:33:28 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/21 21:31:30 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stack_a)
{
	int	x;
	int	y;
	int	z;

	x = *(int *)(*stack_a)->content;
	y = *(int *)(*stack_a)->next->content;
	z = *(int *)(*stack_a)->next->next->content;
	if (is_sorted(*stack_a))
		return ;
	if (x > y && y < z && x < z)
		sa(stack_a);
	else if (x > y && y > z)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (x > y && y < z && x > z)
		ra(stack_a);
	else if (x < y && y > z && x < z)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (x < y && y > z && x > z)
		rra(stack_a);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	min_pos;
	int	size;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		min_pos = find_min_position(*stack_a);
		if (min_pos > 2)
			while (++min_pos <= size)
				rra(stack_a);
		else
			while (--min_pos >= 0)
				ra(stack_a);
		pb(stack_a, stack_b);
		size = ft_lstsize(*stack_a);
	}
	sort_3(stack_a);
	while (ft_lstsize(*stack_b))
		pa(stack_b, stack_a);
}

int	find_min_position(t_list *head)
{
	int		min_val;
	int		position;
	int		current_pos;
	t_list	*current;

	if (!head)
		return (-1);
	min_val = *(int *)head->content;
	position = 0;
	current_pos = 0;
	current = head;
	while (current)
	{
		if (*(int *)current->content < min_val)
		{
			min_val = *(int *)current->content;
			position = current_pos;
		}
		current = current->next;
		current_pos++;
	}
	return (position);
}
