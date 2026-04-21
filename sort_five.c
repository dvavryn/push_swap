/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:07:15 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/29 11:15:42 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_mins(t_data **a, int *min1, int *min2)
{
	t_data	*cur;

	cur = *a;
	*min1 = INT_MAX;
	*min2 = INT_MAX;
	while (cur)
	{
		if (cur->value < *min1)
		{
			*min2 = *min1;
			*min1 = cur->value;
		}
		else if (cur->value < *min2)
			*min2 = cur->value;
		cur = cur->next;
	}
}

void	sort_five(t_data **a, t_data **b)
{
	int	min1;
	int	min2;

	get_mins(a, &min1, &min2);
	while (get_size(*a) > 3)
	{
		if ((*a)->value == min1 || (*a)->value == min2)
			push_('b', a, b);
		else
			rotate_('a', a, b);
	}
	hardcode_sort_three(a);
	while (*b)
	{
		push_('a', a, b);
		if ((*a)->value > (*a)->next->value)
			swap_('a', a, b);
	}
}
