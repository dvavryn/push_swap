/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:28:21 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:28:27 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_a(char **args)
{
	int		*out;
	size_t	i;

	i = get_size(args);
	out = ft_calloc(i, sizeof(int));
	if (!out)
		return (NULL);
	i = 0;
	while (args[i] != NULL)
	{
		out[i] = ft_atoi(args[i]);
		i++;
	}
	return (out);
}
