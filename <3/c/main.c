/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:53:55 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/15 22:02:33 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int *b;
	size_t	size;
	
	if (argc < 2)
		return (printf("need input "));
	if (check_args(argv))
		return (printf("wrong input "));
	size = argc - 1;
	a = get_tab(argv, size);
	if (!a)
		return (printf("error get_tab"));
	b = (int *)calloc(size, sizeof(int));
	// b[1] = 1;
	steps(a, b, size);
}
