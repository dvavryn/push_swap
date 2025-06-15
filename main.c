/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:23 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/15 14:50:47 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_data *a)
{
	t_data *cur = a;

	while (cur)
	{
		ft_printf("%i: %i\n", cur->index, cur->value);
		cur = cur->next;
	}
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