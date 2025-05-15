/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:51:37 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/15 23:43:00 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void steps(int *a, int *b, size_t size)
{
/* 	help_print(a, b ,size);
	push(a, b, size);
	push(a, b, size);
	// push(a, b, size);
	help_print(a, b ,size);
	rotate(a, size);
	help_print(a, b ,size);
	rrotate(a, size);
	help_print(a, b ,size);
 */
	help_print(a, b, size);

	swap(a);
	printf("\nsa\n");
	help_print(a, b, size);
	
	push(a, b, size);
	printf("\npb\n");
	help_print(a, b, size);
	
	push(a, b, size);
	printf("\npb\n");
	help_print(a, b, size);
	
	push(a, b, size);
	printf("\npb\n");
	help_print(a, b, size);
	
	rr(a, b, size);
	printf("\nrr\n");
	help_print(a, b, size);
	
	rrr(a, b, size);
	printf("\nrrr\n");
	help_print(a, b, size);
	
	swap(a);
	printf("\nsa\n");
	help_print(a, b, size);
	
	push(b, a, size);
	printf("\npa\n");
	help_print(a, b, size);
	
	push(b, a, size);
	printf("\npa\n");
	help_print(a, b, size);
	
	push(b, a, size);
	printf("\npa\n");
	help_print(a, b, size);
}



/* 

sa	||	swap(a);
sb	||	swap(b);
ss	||	ss(a, b);

pa	||	push(a, b, size);
pb	||	push(a, b, size);

ra	||	rotate(a, size);
rb	||	rotate(b, size);
rr	||	rr(a, b, size);

rra	||	rrotate(a, size);
rrb	||	rrotate(b, size);
rrr	||	rrr(a, b, size);




*/