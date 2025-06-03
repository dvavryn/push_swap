/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:20:33 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 22:21:24 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *stack)
{
	size_t	i;

	if (stack->sb == 0)
		return ;
	i = stack->sa;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = stack->b[0];
	i = 0;
	while (i < stack->sb - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = 0;
	stack->sa++;
	stack->sb--;
	ft_printf("pa\n");
}

void	pb(t_data *stack)
{
	size_t	i;

	if (stack->sa == 0)
		return ;
	i = stack->sb;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = stack->a[0];
	i = 0;
	while (i < stack->sa - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = 0;
	stack->sb++;
	stack->sa--;
	ft_printf("pb\n");
}
