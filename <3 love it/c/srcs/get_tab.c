/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 22:01:15 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/15 22:07:31 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*get_tab(char **argv, size_t size)
{
	int		*tab;
	size_t	i;

	tab = (int *)calloc(size, sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	while (argv[i + 1])
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	return (tab);
}
