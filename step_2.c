/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:52:44 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 11:01:21 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	solve_0(t_data *stacks);
static void	solve_fixed(t_data *stacks);
static void	fix_2(t_data *stacks);
static void	fix_3(t_data *stacks);

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
	// solve_0(&(*stacks));
	free(stacks.b);
}

// static void	solve_0(t_data *stacks)
// {
// 	if (stacks->sa <= 3)
// 		solve_fixed(stacks);
// 	else
// 		algo(&(*stacks));
// }
// static void	solve_fixed(t_data *stacks)
// {
// 	if (stacks->sa == 2)
// 		fix_2(&(*stacks));
// 	else if (stacks->sa == 3)
// 		fix_3(&(*stacks)->a);
// }

// static void	fix_2(t_data *stacks)
// {
// 	if (stacks->a[0] < stacks->a[1])
// 		sa(stacks->a);
// }

// static void	fix_3(t_data *stacks)
// {
// 	if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2]
// 		&& stacks->a[0] < stacks->a[2])
// 	{
// 		ra(&(*stacks));
// 		sa(&(*stacks));
// 	}
// 	else if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2]
// 		&& stacks->a[0] < stacks->a[2])
// 		sa(&(*stacks));
// 	else if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2]
// 		&& stacks->a[0] > stacks->a[2])
// 		rra(&(*stacks));
// 	else if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2]
// 		&& stacks->a[0] > stacks->a[2])
// 		ra(&(*stacks));
// 	else if (stacks->a[0] > stacks->a[1] && stacks->a[1] > stacks->a[2])
// 	{
// 		ra(&(*stacks));
// 		sa(&(*stacks));
// 	}
// }