/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcheck_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:25:21 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:25:29 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorcheck_char(int argc, char **argv)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j = 1;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				ft_free_arr(argc, argv);
				ft_printf("ERROR\n");
				exit(3);
			}
			j++;
		}
		i++;
	}
}
