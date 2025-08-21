/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 03:31:17 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/21 17:48:07 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **from, t_list **to)
{
	t_list	*tmp;

	if (!from || !*from)
		return ;
	tmp = *from;
	*from = (*from)->next;
	tmp->next = *to;
	*to = tmp;
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

/* t_list	*create_node(int value)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = value;
	node->next = NULL;
	return (node);
}

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%d ", head->content);
		head = head->next;
	}
	printf("\n");
}
 */
/* #include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *stack_a = create_node(100);
	stack_a->next = create_node(200);

	t_list *stack_b = create_node(1);
	stack_b->next = create_node(2);
	stack_b->next->next = create_node(3);

	printf("Avant pb :\n");
	printf("stack_b : ");
	print_list(stack_b);
	printf("stack_a : ");
	print_list(stack_a);

	pb(&stack_a, &stack_b);

	printf("Après pb :\n");
	printf("stack_b : ");
	print_list(stack_b);
	printf("stack_a : ");
	print_list(stack_a);

	// Libération mémoire à ajouter si besoin
	return (0);
} */