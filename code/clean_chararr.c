/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_chararr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 16:23:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/23 16:52:34 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_single(char **argv);

int	single(char *str)
{
	char	**argv;
	int		out;
	size_t	argc;
	
	argv = ft_split(str, ' ');
	if (!argv)
		return (-1);
	out = convert(argv);
	free_single(argv);
	return (out);
}

int multi(char **main_argv)
{
	char **argv;
	int out;
	
	argv = main_argv + 1;
	out = convert(argv);
	return (out);
}

static void	free_single(char **argv)
{
	size_t	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}