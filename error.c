/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:33:07 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/01 21:39:23 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorcheck(int argc, char **argv)
{
	errorcheck_char(argc, argv);
	errorcheck_minmax(argc, argv);
	errorcheck_double(argc, argv);
}

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
