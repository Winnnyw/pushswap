/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:36:56 by rokilic           #+#    #+#             */
/*   Updated: 2025/07/25 19:16:25 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*temp;
	t_list	*first;
	t_list	*second;

	first = *stack_a;
	second = first->next;
	temp = first;
	first->next = second->next;
	second->next = temp;
	*stack_a = second;
	write(1, "sa\n", 3);
}

void	sa_silent(t_list **stack_a)
{
	t_list	*temp;
	t_list	*first;
	t_list	*second;

	first = *stack_a;
	second = first->next;
	temp = first;
	first->next = second->next;
	second->next = temp;
	*stack_a = second;
}

void	sb(t_list **stack_b)
{
	t_list	*temp;
	t_list	*first;
	t_list	*second;

	first = *stack_b;
	second = first->next;
	temp = first;
	first->next = second->next;
	second->next = temp;
	*stack_b = second;
	write(1, "sb\n", 3);
}

void	sb_silent(t_list **stack_b)
{
	t_list	*temp;
	t_list	*first;
	t_list	*second;

	first = *stack_b;
	second = first->next;
	temp = first;
	first->next = second->next;
	second->next = temp;
	*stack_b = second;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa_silent(stack_a);
	sb_silent(stack_b);
	write(1, "ss\n", 3);
}
