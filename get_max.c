/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:27:09 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 15:13:45 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_data *stacks)
{
	int		max;
	size_t	i;

	max = -2147483648;
	i = 0;
	while (i < stacks->sa)
	{
		if (stacks->a[i] > max)
			max = stacks->a[i];
		i++;
	}
	return (max);
}
