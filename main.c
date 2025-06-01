/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:40:55 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/01 22:56:17 by dvavryn          ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		*a;
	size_t	size;

	a = step_one(argc, argv, &size);
	tmp_print_tab(a, size);
	step_two(a, size);
	free(a);
	return (0);
}
