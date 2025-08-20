/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:43:25 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/15 19:15:30 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_a;
	temp = *stack_a;
	while (node->next->next != NULL)
		node = node->next;
	*stack_a = node->next;
	node->next = NULL;
	(*stack_a)->next = temp;
	write(1, "rra\n", 4);
}

void	rra_silent(t_list **stack_a)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_a;
	temp = *stack_a;
	while (node->next->next != NULL)
		node = node->next;
	*stack_a = node->next;
	node->next = NULL;
	(*stack_a)->next = temp;
}

void	rrb(t_list **stack_b)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_b;
	temp = *stack_b;
	while (node->next->next != NULL)
		node = node->next;
	*stack_b = node->next;
	node->next = NULL;
	(*stack_b)->next = temp;
	write(1, "rrb\n", 4);
}

void	rrb_silent(t_list **stack_b)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_b;
	temp = *stack_b;
	while (node->next->next != NULL)
		node = node->next;
	*stack_b = node->next;
	node->next = NULL;
	(*stack_b)->next = temp;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra_silent(stack_a);
	rrb_silent(stack_b);
	write(1, "rrr\n", 4);
}
