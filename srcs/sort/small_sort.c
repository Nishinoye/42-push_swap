/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 06:40:55 by tedcarpi          #+#    #+#             */
/*   Updated: 2025/04/30 10:53:07 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if (!*a || !(*a)->next)
		return ;
	if ((*a)->value > (*a)->next->value)
		sa(a, 1);
}

void    sort_three(t_stack **stack)
{
    int    top;
    int    mid;
    int    bot;

    top = (*stack)->value;
    mid = (*stack)->next->value;
    bot = (*stack)->next->next->value;
    if (top > mid && top > bot)
        ra(stack, 1);
    else if (mid > top && mid > bot)
        rra(stack, 1);
    top = (*stack)->value;
    mid = (*stack)->next->value;
    if (top > mid)
        sa(stack, 1);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2)
	{
		sort_two(a);
		return ;
	}
	while (stack_size(*a) > 3)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
			pb(a, b);
		else
			ra(a, 1);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
	if ((*a)->index > (*a)->next->index)
		sa(a, 1);
}
