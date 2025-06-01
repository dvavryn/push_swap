/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:39:59 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/01 22:56:55 by dvavryn          ###   ########.fr       */
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

int	*get_a(char **args)
{
	int		*out;
	size_t	i;

	i = get_size(args);
	out = ft_calloc(i, sizeof(int));
	if (!out)
		return (NULL);
	i = 0;
	while (args[i] != NULL)
	{
		out[i] = ft_atoi(args[i]);
		i++;
	}
	return (out);
}

size_t	get_size(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
