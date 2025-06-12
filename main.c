/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:23 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/13 01:53:14 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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

//todo
void	free_data(t_data **top)
{
	return ;
}

//todo --working on 
t_data	*convert(int argc, char **arr)
{
	t_data	*out;
	t_data	*ptr;
	size_t	i;

	init_stack(&out, arr[0]);
	if (out == NULL)
		return (free_arr(arr), error_exit(), NULL);
	ptr = out;
	i = 1;
	while (arr[i])
	{
		append(&ptr, arr[i]);
		if (ptr == NULL)
			exit (1);
			// return (free_data(&out), error_exit(), NULL);
		i++;
	}
	if (argc == 2)
		free_arr(arr);
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
void	sort(t_data **a)
{
	t_data *cur = *a;

	while (cur)
	{
		ft_printf("%i: %i\n", cur->index, cur->value);
		cur = cur->next;
	}
	return ;
}

//todo -- ready?
void	free_stack(t_data **a)
{
	if (!*a)
		return ;
	while (*a)
	{
		*a = (*a)->next;
		free((*a)->prev);
	}
	free(*a);
}

int	main(int argc, char **argv)
{
	t_data	*a;

	a = get_stack(argc, argv);
	// if (!issorted(a))
		sort(&a);
	free_data(&a);

	return (0);
}

// main to test shit
// int main(void)
// {
// 	char *s = "hello world i am a string";
// 	char **arr = ft_split(s, ' ');
// 	if (!arr)
// 		return (1);
// 	for(int i = 0; arr[i]; i++)
// 	{
// 		ft_printf("%s\n", arr[i]);
// 	}
// 	free_arr(arr);
// }