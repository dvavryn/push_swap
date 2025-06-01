/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:40:55 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/01 22:59:59 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*a;
	size_t	size;

	a = step_one(argc, argv, &size);
	tmp_print_tab(a, size);
	step_two(a, size);
	free(a);
	return (0);
}
