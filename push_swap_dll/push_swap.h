/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:07:31 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/04 23:45:22 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../libft/libft.h"
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	struct s_stack	*prev;
	int				value;
	struct s_stack	*next;
}		t_stack;

void	step_one(int argc, char **argv);
char	**get_args(int argc, char **argv);
void	errorcheck(int argc, char **argv);
void	ft_free_arr(int argc, char **arr);

#endif