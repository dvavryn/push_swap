/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:09:38 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/15 23:42:46 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *tab)
{
	int tmp;

	tmp = tab[0];
	tab[0] = tab[1];
	tab[1] = tmp;
}

void	ss(int *a, int *b)
{
	swap(a);
	swap(b);
}

void	push(int *tab1, int *tab2, size_t size)
{	// size--
	size_t	save;
	size_t	i;
	
	if (tab1[0] == 0)
		return ;
	if (tab2[0] == 0)
		tab2[0] = tab1[0];
	else
	{
		save = size - 1;
		while (save > 0)
		{
			tab2[save] = tab2[save - 1];
			save--;
		}
		tab2[0] = tab1[0];
	}
	i = 0;
	while (i < size - 1)
	{
		tab1[i] = tab1[i + 1];
		i++;
	}
	tab1[size - 1] = 0;
}

void	rotate(int *tab, size_t size)
{
	int		tmp;
	size_t	i;
	
	tmp = tab[0];
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] != 0)
			tab[i] = tab[i + 1];
		i++;
	}
	while (tab[size - 2] == 0)
		size--;
	tab[size - 1] = tmp;
}

void	rr(int *a, int *b, size_t size)
{
	rotate(a, size);
	rotate(b, size);
}

void	rrotate(int *tab, size_t size)
{
	int 	tmp;
	size_t	i;
	size_t	save;
	
	while (tab[size - 1] == 0)
		size--;
	save = size - 1;
	// printf("%i", tab[save]);
	tmp = tab[save];
	i = 0;
	while (save > 0)
	{
		tab[save] = tab[save - 1];
		save--;
	}
	tab[0] = tmp;
}

void	rrr(int *a, int *b, size_t size)
{
	rrotate(a, size);
	rrotate(b, size);
}