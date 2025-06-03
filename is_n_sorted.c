/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_n_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:49:19 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:30:21 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
