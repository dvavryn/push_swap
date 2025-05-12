/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:21:46 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/13 00:38:49 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	checkargs(char **argv);

int	errorcheck(int argc, char **argv)
{
	if (argc < 3)
	{
		ft_printf("ERROR: not enough arguments\n");
		return (1);
	}
	if (checkargs(argv) != 0)
	{
		ft_printf("ERROR: wrong format");
		return (2);
	}
	return (0);
}

static int	checkargs(char **argv)
{
	size_t	i;
	size_t	j;

	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/* int main(int argc, char **argv)
{
	int i = checkargs(argv);
	return (ft_printf("%i", i));
} */