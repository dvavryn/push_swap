/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:21:23 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/13 00:39:04 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//todo --working on
t_data	*convert(int argc, char **arr)
{
	t_data	*out;
	
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

//todo
int	issorted(t_data *a)
{
	if (a)
		return (0);
	return (1);
}

//todo
void	sort(t_data **a)
{
	return ;
}

//todo
void	free_stack(t_data **a)
{
	return ;
}

int	main(int argc, char **argv)
{
	t_data	*a;

	a = get_stack(argc, argv);
	if (!issorted(a))
		sort(&a);
	free_stack(&a);
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