/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 00:17:43 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 00:23:16 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *stacks)
{
	size_t	i;
	int		tmp;

	tmp = stacks->a[0];
	i = 0;
	while (i < stacks->sa - 1)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->a[i] = tmp;
	ft_printf("ra\n");
}

void	rb(t_data *stacks)
{
	size_t	i;
	int		tmp;

	tmp = stacks->b[0];
	i = 0;
	while (i < stacks->sb - 1)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->b[i] = tmp;
	ft_printf("rb\n");
}

void	rr(t_data *stacks)
{
	size_t	i;
	int		tmp;

	i = 0;
	tmp = stacks->a[i];
	while (i < stacks->sa - 1)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->a[i] = tmp;
	i = 0;
	tmp = stacks->b[i];
	while (i < stacks->sb - 1)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->b[i] = tmp;
	ft_printf("rr\n");
}
