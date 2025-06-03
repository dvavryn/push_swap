/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcheck_double.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:26:18 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:33:57 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorcheck_double(int argc, char **argv)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[j])
		{
			if (i != j && (ft_atol(argv[i]) == ft_atol(argv[j])))
			{
				ft_free_arr(argc, argv);
				ft_printf("ERROR\n");
				exit(5);
			}
			j++;
		}
		i++;
	}
}
