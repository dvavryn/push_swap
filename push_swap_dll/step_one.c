/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:28:34 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/04 23:50:44 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_size(char **args);
t_stack *get_a(char **args);

void	step_one(int argc, char **argv)
{
	char	**args;

	if (argc < 2)
	{
		ft_printf("ERROR\n");
		exit(1);
	}
	args = get_args(argc, argv);
	errorcheck(argc, args);
	
	t_stack	*a;
	a = get_a(args);
	
}

t_stack *get_a(char **args)
{
	t_stack	*head;
	size_t	i;
	
	i = 0;
	while ()
	

	return (out);
}

size_t	get_size(char **args)
{
	size_t	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}
