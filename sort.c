/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 22:02:09 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/15 22:55:33 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*************************
 * Prototypes:
	swap_('a', &a, &b);
	swap_('b', &a, &b);
	swap_('s', &a, &b);
	push_('b', &a, &b);
	push_('a', &a, &b);
	rotate_('a', &a, &b);
	rotate_('b', &a, &b);
	rotate_('s', &a, &b);
	rrotate_('a', &a, &b);
	rrotate_('b', &a, &b);
	rrotate_('r', &a, &b);
**************************/

size_t get_size(t_data *stack)
{
	size_t	i;

	if (!stack)
		return (0);
	i = 1;
	while (stack->next)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	hardcode_sort(t_data **stack_a)
{
	int	a; 
	int	b; 
	int	c;
	
	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	if (get_size(*stack_a) == 2 && a > b)
		return (swap_('a', stack_a, NULL), 0);
	c = (*stack_a)->next->next->value;
	if (a < b && b < c);
	else if (a < b && b > c && a < c)
		return (rrotate_('a', stack_a, NULL), swap_('a', stack_a, NULL), 0);
	else if (a > b && b < c && a < c)
		return (swap_('a', stack_a, NULL), 0);
	else if (a < b && b > c && a > c)
		return (rrotate_('a', stack_a, NULL), 0);
	else if (a > b && b < c && a > c)
		return (rotate_('a', stack_a, NULL), 0);
	else if (a > b && b > c)
		return (swap_('a', stack_a, NULL), rrotate_('a', stack_a, NULL), 0);
}

void	sort(t_data *a)
{
	t_data *b;

	if (get_size(a) <= 3)
		hardcode_sort(&a);
	
	b = NULL;
	// print_data(a, b);
	return ;
}












// void	sort(t_data *a)  // bubblesort
// {
// 	t_data *b;
	
// 	b = NULL;
// 	print_data(a, b);
// 	while (a)
// 	{
// 		if (a->value == get_min(a))
// 			push_('b', &a, &b);
// 		else
// 			rotate_('a', &a, &b);
// 	}
// 	while (b)
// 	{
// 		push_('a', &a, &b);
// 	}
// 	print_data(a, b);
// 	return ;
// }

void	print_data(t_data *a, t_data *b)
{
	t_data *cura;
	t_data *curb;

	cura = a;
	curb = b;
	while (cura)
	{
		// ft_printf("A: %i\n", cura->value);
		ft_printf("%i ", cura->value);
		cura = cura->next;
	}
	ft_printf("\n");
	// while (curb)
	// {
	// 	ft_printf("B: %i\n", curb->value);
	// 	curb = curb->next;
	// }
}
