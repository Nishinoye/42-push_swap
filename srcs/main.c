/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 06:37:05 by tedcarpi          #+#    #+#             */
/*   Updated: 2025/04/30 07:32:15 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	parse_args(ac, av, &a);
	if (!is_sorted(a))
	{
		if (stack_size(a) == 2)
			sort_two(&a);
		else if (stack_size(a) == 3)
			sort_three(&a);
		else if (stack_size(a) <= 5)
			sort_five(&a, &b);
		else
			radix_sort(&a, &b);
	}
	free_stack(&a);
	return (0);
}
