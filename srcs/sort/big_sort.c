/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 06:56:16 by tedcarpi          #+#    #+#             */
/*   Updated: 2025/04/30 07:35:57 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	max_bits = get_max_bits(*a);
	i = -1;
	while (++i < max_bits)
	{
		size = stack_size(*a);
		j = -1;
		while (++j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a, 1);
			else
				pb(a, b);
		}
		while (*b)
			pa(a, b);
	}
}
