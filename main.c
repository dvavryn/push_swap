/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:23 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/15 15:32:28 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_data(t_data *a, t_data *b)
{
	t_data *cura;
	t_data *curb;

	cura = a;
	curb = b;
	ft_printf("\n");

	while (cura)
	{
		ft_printf("%i: %i\n", cura->index, cura->value);
		cura = cura->next;
	}
	ft_printf("\n");
	while (curb)
	{
		ft_printf("%i: %i\n", curb->index, curb->value);
		curb = curb->next;
	}
	ft_printf("----------------\n");
}

void	sort(t_data *a)
{
	t_data *b;
	
	b = NULL;

	print_data(a, b);
	swap_('a', &a, &b);
	swap_('b', &a, &b);
	swap_('s', &a, &b);
	push_('a', &a, &b);
	push_('b', &a, &b);
	rotate_('a', &a, &b);
	rotate_('b', &a, &b);
	rotate_('s', &a, &b);
	rrotate_('a', &a, &b);
	rrotate_('b', &a, &b);
	rrotate_('r', &a, &b);
	
	print_data(a, b);
	return ;
}

int	main(int argc, char **argv)
{
	t_data	*a;

	a = get_stack(argc, argv);
	if (!issorted(a))
		sort(a);
	free_data(a);
	return (0);
}

int	issorted(t_data *a)
{
	t_data	*curr;

	if (!a)
		return (0);
	curr = a;
	while (curr)
	{
		if (curr->value > curr->next->value)
			return (0);
		curr = curr->next;
	}
	return (1);
}
