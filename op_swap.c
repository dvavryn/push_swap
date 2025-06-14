/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:25:54 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/14 11:26:18 by dvavryn          ###   ########.fr       */
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

void	sa(t_data **a)
{
	t_data *buf;

	buf = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	if ((*a)->next != NULL)
		(*a)->next->prev = buf;
	buf->prev = (*a);
	if((*a)->next)
		buf->next = (*a)->next;
	else
		buf->next = NULL;
	(*a)->next = buf;
}

void	sb(t_data **b)
{
	t_data *buf;


	if ((*b)->next == NULL)
		return ;
	buf = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	if ((*b)->next->next)
		(*b)->next->prev = buf;
	buf->prev = (*b);
	if ((*b)->next)
		buf->next = (*b)->next;
	else
		buf->next = NULL;
	(*b)->next = buf;
}

int main(void)
{
	t_data *a;

	a = malloc(sizeof(t_data));
	a->prev = NULL;
	a->val = 50;
	a->index = 0;
	// a->next = NULL;
	a->next = malloc(sizeof(t_data));
	a->next->prev = a;
	a->next->val = 700;
	a->next->index = 1;
	a->next->next = NULL;
	a->next->next = malloc(sizeof(t_data));
	a->next->next->prev = a->next;
	a->next->next->val = 25;
	a->next->next->index = 2;
	a->next->next->next = NULL;

	t_data *cur;

	cur = a;
	while (cur)
	{
		printf("%i:\nprev:\t%p\ncur:\t%p\nnext:\t%p\n", cur->index, cur->prev, cur, cur->next);
		cur = cur->next;
	}
	sa(&a);
	printf("\nsa\n\n");
	cur = a;
	while (cur)
	{
		printf("%i:\nprev:\t%p\ncur:\t%p\nnext:\t%p\n", cur->index, cur->prev, cur, cur->next);
		cur = cur->next;
	}

}