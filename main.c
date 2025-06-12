/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:23 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/12 14:38:20 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int	main(int argc, char **argv)
{
	char	**args;

	if (argc < 2)
		ft_error(argc, args);
	if (argc == 2)
		args = one(argv[1]);
	else if (argc > 2)
		args = argv + 1;
	errorcheck(argc, args);
}

t_data	*newnode(t_data *prev, int value, t_data *next)
{
	t_data *node;

	return (NULL);
}

size_t	argcount(char **args)
{
	size_t	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

void	create_dll(int argc, char **args, t_data **head)
{
	size_t	i;

	i = argcount(args);
	head = malloc(i * sizeof(t_data *));
	if (!head)
		ft_error(argc, args);
	*head = newnode(NULL, ft_atoi(args[0]), NULL);	
}