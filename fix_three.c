/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_three.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:46:52 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 12:47:31 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fix_three(t_data *stacks)
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
	exit (1);
}
