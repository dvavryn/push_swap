/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:23 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/13 15:25:40 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//todo ?????????????????
void	init_stack(t_data **head, char *s)
{
	t_data *node = malloc(sizeof(t_data));
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

// DONE!!!
void	append(t_data **ptr, char *s)
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

// DONE!!!
void	free_data(t_data *top)
{
	while (top->next)
	{
		top = top->next;
		free(top->prev);
	}
	free(top);
}

// DONE!!!
t_data	*convert(int argc, char **arr)
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

//todo -- working on -- convert 
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

//todo -- ready??
int	issorted(t_data *a)
{
	t_data	*curr;

	if (!a)
		return (0);
	curr = a;
	while (curr)
	{
		if (curr->value > curr->next->value)
			return (0);
		curr = curr->next;
	}
	return (1);
}

// todo ???????????????????????????????
void	sort(t_data *a)
{
	t_data *cur = a;

	// sa(a);	// todo -working on
	// sb(a);	// todo
	// pb(a);	// todo
	// pa(a);	// todo
	// ra(a);	// todo
	// rb(a);	// todo
	// rr(a);	// todo
	// rra(a);	// todo
	// rrb(a);	// todo
	// rrr(a);	// todo
	while (cur)
	{
		ft_printf("%i: %i\n", cur->index, cur->value);
		cur = cur->next;
	}
	return ;
}

int	main(int argc, char **argv)
{
	t_data	*a;

	a = get_stack(argc, argv);
	if (!issorted(a))
		sort(a);
	free_data(a);
	return (0);
}
