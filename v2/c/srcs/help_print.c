/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:59:00 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/15 23:29:55 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	help_print(int *a, int *b, size_t size)
{
	static int	i;
	int			j;

	if (!i)
		i = 0;
	j = 0;
	printf("round #%i\n", i);
	while (j < size)
	{
		if (a[j] != 0 || b[j] != 0)
			printf("%.i %.i\n", a[j], b[j]);
			// printf("%i %i\n", a[j], b[j]);
		j++;
	}
	printf("- -\n");
	printf("a b\n");
	printf("----------------------------\n");
	i++;
}
