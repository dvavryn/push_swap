/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:49:57 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/15 14:50:21 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char		**ps_split(char *arg);
static t_data	*convert(int argc, char **arr);
static void		init_stack(t_data **head, char *s);
static void		append(t_data **ptr, char *s);

t_data	*get_stack(int argc, char **argv)
{
	char	**arr;

	if (argc < 2)
		error_exit();
	if (argc == 2)
		arr = ps_split(argv[1]);
	else
		arr = argv + 1;
	errorcheck(argc, arr);
	return (convert(argc, arr));
}

static t_data	*convert(int argc, char **arr)
{
	t_data	*out;
	t_data	*ptr;
	size_t	i;
	bool	fail;

	init_stack(&out, arr[0]);
	if (out == NULL)
		return (free_arr(arr), error_exit(), NULL);
	ptr = out;
	i = 1;
	while (arr[i])
	{
		append(&ptr, arr[i]);
		if (ptr == NULL)
			fail = true;
		i++;
	}
	if (argc == 2)
		free_arr(arr);
	if (fail)
		return (free_data(out), error_exit(), NULL);
	return (out);
}

static void	append(t_data **ptr, char *s)
{
	t_data		*node;
	static int	i = 1;

	node = malloc(sizeof(t_data));
	if (!node)
	{
		*ptr = NULL;
		return ;
	}
	node->index = i;
	node->value = ft_atoi(s);
	node->prev = *ptr;
	node->next = NULL;
	(*ptr)->next = node;
	*ptr = node;
	i++;
}

void	init_stack(t_data **head, char *s)
{
	t_data	*node;

	node = malloc(sizeof(t_data));
	if (!node)
	{
		*head = NULL;
		return ;
	}
	node->index = 0;
	node->value = ft_atoi(s);
	node->prev = NULL;
	node->next = NULL;
	*head = node;
}

static char	**ps_split(char *arg)
{
	char	**out;

	out = ft_split(arg, ' ');
	if (!out)
		error_exit();
	return (out);
}
