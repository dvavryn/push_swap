/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:48:10 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/04 23:05:41 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "tmp_print.c"

int	getmax(char c, t_data *stacks);
int	getmin(char c, t_data *stacks);
void	get_pushcosta(t_data *stacks);
void	get_pushcosta(t_data *stacks);

void	algo(t_data *stacks)
{
	tmp_print_data(*stacks);
	pb(stacks);
	pb(stacks);
	get_pushcosta(stacks);
	// printf("\n\nmina:%i\nmaxa:%i\n", getmin('a',stacks), getmax('a', stacks));
	// printf("\n\nminb:%i\nmaxb:%i\n", getmin('b',stacks), getmax('b', stacks));
	tmp_print_data(*stacks);
}

















void	get_pushcosta(t_data *stacks)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 1;
	while (i < stacks->sa)
	{
		if (i <= stacks->sa / 2)
		{
			stacks->pca[i] = j;
			j++;
		}
		else
		{
			stacks->pca[i] = j - 1;
			j--;
		}
		i++;
	}
}

void	get_pushcostb(t_data *stacks)
{
	size_t	i;
	size_t	j;
	int		pc;
	
	i = 0;
	while (i < stacks->sa)
	{
		j = 1;	
		while (j < stacks->sb - 1)
		{
			if (stacks->a[i] > stacks->b[j + 1] && stacks->a[i] < stacks->b[j])
				stacks->pcb[i] = j;
			j++;
		}
		i++;
	}
}

int	getmax(char c, t_data *stacks)
{
	size_t	i;
	int max;
	
	max = 0;
	i = 0;
	if (c == 'a')
	{
		max = stacks->a[0];
		while(i < stacks->sa)
		{
			if (max < stacks->a[i])
				max = stacks->a[i];
			i++;
		}
	}
	else if (c == 'b')
	{
		max = stacks->b[0];
		while(i < stacks->b[0])
		{
			if (max < stacks->b[i])
				max = stacks->b[i];
			i++;
		}
	}
	return (max);
}

int	getmin(char c, t_data *stacks)
{
	size_t	i;
	int min;
	
	min = 0;
	i = 0;
	if (c == 'a')
	{
		min = stacks->a[0];
		while(i < stacks->sa)
		{
			if (min > stacks->a[i])
				min = stacks->a[i];
			i++;
		}
	}
	else if (c == 'b')
	{
		min = stacks->b[0];
		while(i < stacks->sb)
		{
			if (min > stacks->b[i])
				min = stacks->b[i];
			i++;
		}
	}
	return (min);
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
