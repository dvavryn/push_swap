/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:52:54 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/23 17:10:28 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_args(char **argv);

int	convert(char **argv)
{
	check_args(argv);
	return (0);
}

static int	check_args(char **argv)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
		{
			j++;
			if (argv[i][j] == 0)
				return (-1);
		}
		while (argv[i][j])
		{
			if (!(ft_isdigit(argv[i][j])))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
