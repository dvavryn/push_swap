/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:49:54 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 12:50:03 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solve(t_data *stacks)
{
	if (stacks->sa == 2)
	{
		if (stacks->a[0] > stacks->a[1])
			sa(stacks);
	}
	else if (stacks->sa == 3)
		fix_three(stacks);
	else
		algo(stacks);
}
