/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcheck_minmax.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:25:51 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:25:59 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorcheck_minmax(int argc, char **argv)
{
	size_t	i;
	long	tmp;

	i = 0;
	while (argv[i])
	{
		tmp = ft_atol(argv[i]);
		if (tmp < INT_MIN || tmp > INT_MAX)
		{
			ft_free_arr(argc, argv);
			ft_printf("ERROR\n");
			exit(4);
		}
		i++;
	}
}
