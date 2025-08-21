/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:08:51 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/21 18:44:38 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fterror(void)
{
	write(1, "Error\n", 6);
}

void	free_stack(void *stack)
{
	t_list	*tmp;

	(tmp) = (t_list *)stack;
	free(tmp->content);
	free(tmp);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (fterror(), 1);
	if (parse_args(&av[1], &stack_a) == false)
		return (ft_lstclear(&stack_a, free_stack), fterror(), 1);
	radix(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free_stack);
	return (0);
}
