/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:08:51 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/20 18:57:13 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fterror(void)
{
	write(1, "Error\n", 6);
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
		return (fterror(), 1);
	// print_stack(stack_a);
	radix(&stack_a, &stack_b);
	return (0);
}
