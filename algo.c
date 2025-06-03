/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:48:10 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 23:46:29 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_data *stacks)
{
	int dividor;

	dividor = 2;
	while (stacks->sa != 0 && dividor < 2147483647)
	{
		if (stacks->a[0] % dividor == 1)
			pb(stacks);
		else
		{
			ra(stacks);
		}
		dividor *= 2;
	}
}

// int	get_maxb(t_data *stacks);
// // 
// void	algo(t_data	*stacks)
// {
// 	int	min;
// 	int max;
// 	int *go;
// 	// 
// 	if (!is_n_sorted(stacks))
// 		exit(1);
// 	while (stacks->sa > 0)
// 	{
// 		min = get_min(stacks);	
// 		max = get_max(stacks);
// 		if (get_pos(min, stacks) <= stacks->sa / 2 || get_pos(max, stacks) <= stacks->sa / 2)
// 		{
// 			if (get_pos(min, stacks) <= get_pos(max, stacks))
// 			{
// 				while (stacks->a[0] != min)
// 					ra(stacks);
// 			}
// 			else 
// 			{
// 				while (stacks->a[0] != max)
// 					ra(stacks);
// 			}
// 		}
// 		else if (get_pos(min, stacks) > stacks->sa / 2 || get_pos(max, stacks) > stacks->sa / 2)
// 		{
// 			if (get_pos(min, stacks) > get_pos(max, stacks))
// 			{
// 				while (stacks->a[0] != min)
// 					rra(stacks);
// 			}
// 			else
// 			{
// 				while (stacks->a[0] != max)
// 					rra(stacks);
// 			}
// 		}
// 		else
// 		{
// 			while (stacks->a[0] != min)
// 				ra(stacks);
// 		}
// 		pb(stacks);
// 	}
// 	while (stacks->sb != 0)
// 	{
// 		while (stacks->b[0] != get_maxb(stacks))
// 			rrb(stacks);
// 		pa(stacks);
// 	}
// 	pa(stacks);
// 	free(stacks->a);
// 	free(stacks->b);
// 	exit(1);
// }
// int	get_maxb(t_data *stacks)
// {
// 	int		max;
// 	size_t	i;
// 	max = -2147483648;
// 	i = 0;
// 	while (i < stacks->sb)
// 	{
// 		if (stacks->b[i] > max)
// 			max = stacks->b[i];
// 		i++;
// 	}
// 	return (max);
// }
