/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:03 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/12 14:24:05 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **one(char *arg)
{
	char **out;

	out = ft_split(arg, ' ');
	if (!out)
		exit (1);
	return (out);
}

void	free_arr(int argc, char **arr)
{
	size_t	i;

	if (argc != 2)
		exit(1);
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_error(int argc, char **args)
{
	ft_printf("ERROR\n");
	free_arr(argc, args);
	exit(1);
}

static int	check_sign(char *arg)
{
	if (arg[0] == '+' || arg[0] == '-')
		return (1);
	return (0);
}

void	errorcheck(int argc, char **args)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (args[i])
	{
		j = check_sign(args[i]);
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]) && (args[i][j] != ' ' || args[i][j] != '\t'))
				ft_error(argc, args);
			j++;
		}
		k = 0;
		while (args[k])
		{
			if (i != k && ft_atol(args[i]) == ft_atol(args[k]))
				ft_error(argc, args);
			k++;
		}
		if (ft_atol(args[i]) > INT_MAX || ft_atol(args[i]) < INT_MIN)
			ft_error(argc, args);
		i++;
	}
}
