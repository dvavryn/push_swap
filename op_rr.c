/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 00:23:30 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 00:36:56 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data	*stacks)
{
	size_t	i;
	int		tmp;

	i = stacks->sa - 1;
	tmp = stacks->a[i];
	while (i > 0)
	{
		stacks->a[i] = stacks->a[i - 1];
		i--;
	}
	stacks->a[i] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_data	*stacks)
{
	size_t	i;
	int		tmp;

	i = stacks->sb - 1;
	tmp = stacks->b[i];
	while (i > 0)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[i] = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_data *stacks)
{
	size_t	i;
	int		tmp;

	i = stacks->sa - 1;
	tmp = stacks->a[i];
	while (i > 0)
	{
		stacks->a[i] = stacks->a[i - 1];
		i--;
	}
	stacks->a[i] = tmp;
	i = stacks->sb - 1;
	tmp = stacks->b[i];
	while (i > 0)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[i] = tmp;
	ft_printf("rrr\n");
}
