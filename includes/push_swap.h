/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 06:36:45 by tedcarpi          #+#    #+#             */
/*   Updated: 2025/04/30 07:36:49 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

/* Parsing */
void	parse_args(int ac, char **av, t_stack **a);
void	check_duplicates(t_stack *stack);
void	error_exit(t_stack **stack);
void	stack_add_back(t_stack **stack, t_stack *new);
int		ft_isnumber(char *str);
long	ft_atol(const char *str);
t_stack	*stack_new(int value);

/* Operations */
void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b);

/* Sorting */
void	sort_two(t_stack **a);
void	sort_three(t_stack **stack);
void	sort_five(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b);

/* Utils */
int		is_sorted(t_stack *stack);
int		stack_size(t_stack *stack);
int		ft_isdigit(char c);
int		get_max_bits(t_stack *stack);
void	free_stack(t_stack **stack);
void	assign_indexes(t_stack *stack);
t_stack	*stack_last(t_stack *stack);

#endif