/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 00:30:47 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 00:51:36 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_data	*stacks)
{
	size_t	position;
	int		min;

	while (stacks->a != 0)
	{
		min = get_min(stacks);
		position = get_pos(&stacks, min);
		if (position <= stacks->sa/2)
			while (get_pos(stacks, min) != 0)
				ra(&stacks);
		else
			while (get_pos(&stacks, min) != 0)
				rra(&stacks);
		pb(&stacks);
	}
	while (stacks->sb != 0)
		pa(&stacks);
}

int	get_min(t_data *stacks)
{
	size_t	i;
	int		min;

	min = INT_MAX;
	i = 0;
	while (i < stacks->sa)
	{
		if (stacks->a[i] < min)
			min = stacks->a[i];
		i++;
	}
	return (min);
}

size_t	get_pos(t_data *stacks, int min)
{
	size_t	i;
	
	i = 0;
	while (i < stacks->sa - 1)
	{
		if (stacks->a[i] == min)
			return (i);
		i++;
	}
	return (0);
}