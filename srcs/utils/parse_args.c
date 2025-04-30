/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 06:41:17 by tedcarpi          #+#    #+#             */
/*   Updated: 2025/04/30 07:32:51 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_args(int ac, char **av, t_stack **stack)
{
	int		i;
	long	num;
	t_stack	*new;

	i = 1;
	while (i < ac)
	{
		if (!ft_isnumber(av[i]))
			error_exit(stack);
		num = ft_atol(av[i]);
		if (num < INT_MIN || num > INT_MAX)
			error_exit(stack);
		new = stack_new((int)num);
		if (!new)
			error_exit(stack);
		stack_add_back(stack, new);
		i++;
	}
	check_duplicates(*stack);
	assign_indexes(*stack);
}
