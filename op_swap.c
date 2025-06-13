/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:25:54 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/13 16:41:38 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

#include <stdlib.h>
#include <stdio.h>

typedef struct s_data
{
	struct s_data *prev;
	int val;
	int index;
	struct s_data *next;
}	t_data;

void	sa(t_data *a)
{
	t_data *buf;

	buf = a->next;
	
}

int main(void)
{
	t_data *a;

	a = malloc(sizeof(t_data));
	a->prev = NULL;
	a->val = 50;
	a->index = 0;
	a->next = malloc(sizeof(t_data));
	a->next->prev = a;
	a->next->val = 700;
	a->next->index = 1;
	a->next->next = malloc(sizeof(t_data));
	a->next->next->prev = a->next;
	a->next->next->val = 25;
	a->next->next->index = 2;
	a->next->next->next = NULL;

	t_data *cur;

	cur = a;
	while (cur)
	{
		printf("%i: %i\n", cur->index, cur->val);
		cur = cur->next;
	}
	sa(a);
	printf("\nsa\n\n");
	cur = a;
	while (cur)
	{
		printf("%i: %i\n", cur->index, cur->val);
		cur = cur->next;
	}

}