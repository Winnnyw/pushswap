/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokilic <rokilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:13:18 by rokilic           #+#    #+#             */
/*   Updated: 2025/08/22 18:38:40 by rokilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// operation swap
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

// operation push
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

// operation rotate
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

// operation reverse
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// parsing
bool	parse_args(char **av, t_list **stack_a);
void	print_stack(t_list *stack);
void	fterror(void);
void	compute_index(t_list *stack_a);

// algo
bool	get_bit(int number, int index);
void	radix(t_list **stack_a, t_list **stack_b);
bool	is_sorted(t_list *stack_a);
void	sort(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a);
void	sort_5(t_list **stack_a, t_list **stack_b);
int		find_min_position(t_list *head);


typedef struct s_node
{
	int	index;
	int	n;
}		t_node;

#endif