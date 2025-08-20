/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:14:01 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/20 18:22:48 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_a;
	temp = *stack_a;
	*stack_a = temp->next;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	node->next->next = NULL;
	write(1, "ra\n", 3);
}

static void	ra_silent(t_list **stack_a)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_a;
	temp = *stack_a;
	*stack_a = temp->next;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	node->next->next = NULL;
}

void	rb(t_list **stack_b)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_b;
	temp = *stack_b;
	*stack_b = temp->next;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	node->next->next = NULL;
	write(1, "rb\n", 3);
}

static void	rb_silent(t_list **stack_b)
{
	t_list	*node;
	t_list	*temp;

	node = *stack_b;
	temp = *stack_b;
	*stack_b = temp->next;
	while (node->next != NULL)
		node = node->next;
	node->next = temp;
	node->next->next = NULL;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra_silent(stack_a);
	rb_silent(stack_b);
	write(1, "rr\n", 3);
}
