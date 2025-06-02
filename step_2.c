/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:52:44 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 20:44:02 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	algo(t_data *stacks);
void	step_two(int *a, size_t size)
{
	t_data	stacks;

	stacks.a = a;
	stacks.b = ft_calloc(size, sizeof(int));
	if (!stacks.b)
	{
		free(a);
		exit(6);
	}
	stacks.sa = size;
	stacks.sb = 0;
	// solve_0(stacks);
	// tmp_print_data(stacks);
	algo(&stacks);
	// tmp_print_data(stacks);
	free(stacks.b);
}

void fix(t_data *stacks);

void	algo(t_data *stacks)
{
	if (stacks->sa == 2 )
		if (stacks->a[0] > stacks->a[1])
			sa(stacks);
	if (stacks->sa == 3)
		fix(stacks);
}

void fix(t_data *stacks)
{
	if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2]
		&& stacks->a[0] < stacks->a[2])
	{
		rra(stacks);
		sa(stacks);
	}
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2]
		&& stacks->a[0] < stacks->a[2])
		sa(stacks);
	if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2]
		&& stacks->a[0] > stacks->a[2])
		rra(stacks);
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2]
		&& stacks->a[0] > stacks->a[2])
		ra(stacks);
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] > stacks->a[2])
	{
		ra(stacks);
		sa(stacks);
	}
}