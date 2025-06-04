/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_pc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:12:20 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/04 22:12:51 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_pc(t_data *stacks)
{
	int	tmp;

	tmp = stacks->pc[0];
	stacks->pc[0] = stacks->pc[1];
	stacks->pc[1] = tmp;
}

void	push_pc(t_data *stacks)
{
	size_t	i;

	if (stacks->sa == 0)
		return ;
	i = 0;
	while (i < stacks->sa - 1)
	{
		stacks->pc[i] = stacks->pc[i + 1];
		i++;
	}
	stacks->pc = 0;
}

void	rot_pc(t_data *stacks)
{
	size_t	i;
	int		tmp;

	tmp = stacks->pc[0];
	i = 0;
	while (i < stacks->sa - 1)
	{
		stacks->pc[i] = stacks->pc[i + 1];
		i++;
	}
	stacks->pc[i] = tmp;
}

void	rrot_pc(t_data *stacks)
{
	size_t	i;
	int		tmp;

	i = stacks->sa - 1;
	tmp = stacks->pc[i];
	while (i < 0)
	{
		stacks->pc[i] = stacks->pc[i - 1];
		i--;
	}
	stacks->pc[i] = tmp;
}
