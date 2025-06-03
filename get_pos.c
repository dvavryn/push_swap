/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:27:40 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:27:47 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
