/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:00:01 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 20:37:09 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tmp_print_arr(char **args)
{
	size_t	i;

	i = 0;
	while (args[i])
	{
		ft_printf("%s ", args[i]);
		i++;
	}
}

void	tmp_print_tab(int *tab, size_t	size)
{
	size_t	i;

	i = 0;
	ft_printf("size: %i\t", size);
	while (i < size)
	{
		ft_printf(" %d ", tab[i]);
		i++;
	}
	ft_printf("\n");
}

void	tmp_print_data(t_data stacks)
{
	size_t	i;

	i = 0;
	printf("------------------------------\n");
	printf("a:\t\t");
	while (i < stacks.sa)
	{
		printf("%i  ", stacks.a[i]);
		i++;
	}
	i = 0;
	printf("\n\nb:\t\t");
	while (i < stacks.sb)
	{
		printf("%i  ", stacks.b[i]);
		i++;
	}
	printf("\n\nsa:\t\t%li\nsb:\t\t%li\n", stacks.sa, stacks.sb);
	printf("------------------------------\n");
}