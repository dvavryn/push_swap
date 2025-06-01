/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:36:21 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/01 21:38:45 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv)
{
	char	**out;

	if (argc == 2)
	{
		out = ft_split(argv[1], ' ');
		if (!out)
		{
			ft_printf("ERROR\n");
			exit(2);
		}
	}
	else
		out = argv + 1;
	return (out);
}
