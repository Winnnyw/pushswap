/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:39:59 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/22 18:38:08 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	compute_index(t_list *stack_a)
{
	t_list	*current;
	t_list	*compare;
	int		index;

	current = stack_a;
	while (current)
	{
		index = 0;
		compare = stack_a;
		while (compare)
		{
			if (((t_node *)compare->content)->n < \
				((t_node *)current->content)->n)
				index++;
			compare = compare->next;
		}
		((t_node *)current->content)->index = index;
		current = current->next;
	}
}

static bool	safe_atoi(char *str, int *out)
{
	int		i;
	int		sign;
	int		result;
	long	n;

	n = 0;
	i = 0;
	sign = 1;
	result = false;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = true;
		n = n * 10 + str[i] - '0';
		if ((n * sign > INT_MAX) || (n * sign < INT_MIN))
			return (false);
		i++;
	}
	*out = (int)n * sign;
	return (i == (int)ft_strlen(str) && result);
}

static bool	check_double(t_list *stack, int value)
{
	while (stack)
	{
		if (((t_node *)stack->content)->n == value)
			return (true);
		stack = stack->next;
	}
	return (false);
}

bool	parse_args(char **av, t_list **stack_a)
{
	int		i;
	t_node	*node;
	t_list	*tmp;

	i = 0;
	while (av[i])
	{
		node = malloc(sizeof(t_node));
		if (node == NULL)
			return (false);
		if (safe_atoi(av[i], &node->n) == false)
			return (free(node), false);
		if (check_double(*stack_a, node->n) == true)
			return (free(node), false);
		tmp = ft_lstnew((void *)node);
		if (!tmp)
			return (free(node), false);
		ft_lstadd_back(stack_a, tmp);
		i++;
	}
	return (true);
}

// void	print_stack(t_list *stack)
// {
// 	t_list	*tmp;

// 	tmp = stack;
// 	while (tmp)
// 	{
// 		printf("%d\n", ((t_node *)(tmp->content))->n);
// 		tmp = tmp->next;
// 	}
// }
