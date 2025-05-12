/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:53:32 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/13 01:06:49 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*sa(int *a)
{
	int	buf;
	
	buf = a[0];
	a[0] = a[1];
	a[1] = buf;
	return (a);
}

int *sb(int *b)
{
	int buf;

	buf = b[0];
	b[0] = b[1];
	b[1] = buf;
	return (b);
}

void ss(int **a, int **b)
{
	int buf_a;
	int buf_b;

	buf_a = *a[0];
	*a[0] = *a[1];
	*a[1] = buf_a;
	buf_a = *b[0];
	*b[0] = *b[1];
	*b[1] = buf_b;
}
