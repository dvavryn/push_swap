/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:39:48 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/23 16:56:01 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <stdio.h>

typedef struct s_dlll
{
	void	*last;
	int		i;
	void	*next;

}	t_dll;

int	single(char *str);
int	multi(char **main_argv);
int	convert(char **argv);
int	error(void);

#endif