/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:52:44 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 22:57:40 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	solve(t_data *stacks);
int	is_n_sorted(t_data *stacks);
size_t	get_pos(int min, t_data *stacks);
int	get_min(t_data *stacks);
int	get_max(t_data *stacks);

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
	solve(&stacks);
	free(stacks.b);
}

void fix(t_data *stacks);

void	algo(t_data	*stacks)
{
	int	min;

	if (!is_n_sorted(stacks))
		exit(1);
	while (stacks->sa > 0)
	{
		min = get_min(stacks);
		while (get_pos(min, stacks) != 0)
		{
			if (get_pos(min, stacks) <= stacks->sa / 2)
				ra(stacks);
			else
				rra(stacks);
			if (stacks->a[0] == min)
				break ;
		}
		pb(stacks);
	}
	while (stacks->sb != 0)
		pa(stacks);
	pa(stacks);
	exit(1);
}

int	is_n_sorted(t_data *stacks)
{
	size_t	i;
	
	i = 0;
	while (i < stacks->sa - 1)
	{
		if (stacks->a[i] < stacks->a[i + 1])
			i++;
		else
			return (1);
	}
	return (0);
}


size_t	get_pos(int min, t_data *stacks)
{
	size_t	i;

	i = 0;
	while (i < stacks->sa)
	{
		if (stacks->a[i] == min)
			return (i);
		i++;
	}
	return (0);
}

int	get_min(t_data *stacks)
{
	int		min;
	size_t	i;
	
	min = 2147483647;
	i = 0;
	while (i < stacks->sa)
	{
		if (stacks->a[i] < min)
			min = stacks->a[i];
		i++;
	}
	return (min);
}

int	get_max(t_data *stacks)
{
	int		max;
	size_t	i;
	
	max = -2147483648;
	i = 0;
	while (i < stacks->sa)
	{
		if (stacks->a[i] < max)
			max = stacks->a[i];
		i++;
	}
	return (max);
}

void	solve(t_data *stacks)
{
	if (stacks->sa == 2)
	{
		if (stacks->a[0] > stacks->a[1])
			sa(stacks);
	}
	else if (stacks->sa == 3)
		fix(stacks);
	else
		algo(stacks);
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
	exit (1);
}