/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:39:59 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/20 18:20:21 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (*(int *)stack->content == value)
			return (true);
		stack = stack->next;
	}
	return (false);
}

bool	parse_args(char **av, t_list **stack_a)
{
	int		i;
	int		*n;
	t_list	*tmp;

	i = 0;
	while (av[i])
	{
		n = malloc(sizeof(int));
		if (n == NULL)
			return (false);
		if (safe_atoi(av[i], n) == false)
			return (false);
		if (check_double(*stack_a, *n) == true)
			return (false);
		tmp = ft_lstnew((void *)n);
		ft_lstadd_back(stack_a, tmp);
		i++;
	}
	return (true);
}

/* 
void	print_stack(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp)
	{
		printf("%d\n", *(int *)(tmp->content));
		tmp = tmp->next;
	}
} */