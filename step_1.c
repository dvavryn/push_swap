/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:39:59 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:29:25 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*step_one(int argc, char **argv, size_t *size)
{
	char	**args;
	int		*a;

	if (argc < 2)
	{
		ft_printf("ERROR\n");
		exit(1);
	}
	args = get_args(argc, argv);
	errorcheck(argc, args);
	a = get_a(args);
	if (!a)
	{
		ft_free_arr(argc, argv);
		ft_printf("ERROR\n");
		exit(5);
	}
	*size = get_size(args);
	ft_free_arr(argc, args);
	return (a);
}
