/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:52:44 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/04 22:41:57 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	stacks.pca = ft_calloc(size, sizeof(int));
	if (!stacks.pca)
	{
		free(a);
		free(stacks.b);
		exit(6);
	}
	stacks.pcb = ft_calloc(size, sizeof(int));
	if (!stacks.pcb)
	{
		free(a);
		free(stacks.b);
		free(stacks.pcb);
		exit(6);
	}
	stacks.sa = size;
	stacks.sb = 0;
	solve(&stacks);
	free(stacks.b);
	free(stacks.pca);
	free(stacks.pcb);
}
