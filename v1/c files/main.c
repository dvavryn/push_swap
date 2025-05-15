/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:41:58 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/15 16:49:51 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int	*a;
	
	if (argc < 2)
		return(ft_printf("input missing!"));
	if (!check_args(argv + 1))
		return(ft_printf("wrong input"));
	a = init_tab(argv + 1);
	if (!a)
		return(ft_printf("allocation failed"));
	print_tab(argc- 1, a);
	free(a);
	// int a[2];
	// printf("%li", sizeof(a));
}