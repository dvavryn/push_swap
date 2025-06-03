/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:07:32 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 22:49:08 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"
# include "limits.h"

typedef struct s_data
{
	int		*a;
	int		*b;
	size_t	sa;
	size_t	sb;
}		t_data;
void	sa(t_data *stack);
void	sb(t_data *stack);
void	ss(t_data *stack);
void	pa(t_data *stack);
void	pb(t_data *stack);
void	ra(t_data *stack);
void	rb(t_data *stack);
void	rr(t_data *stack);
void	rra(t_data *stack);
void	rrb(t_data *stack);
void	rrr(t_data *stack);
int		get_min(t_data *stacks);
int		get_max(t_data *stacks);
int		is_n_sorted(t_data *stacks);
size_t	get_pos(int min, t_data *stacks);
void	errorcheck_char(int argc, char **argv);
void	errorcheck_minmax(int argc, char **argv);
void	errorcheck_double(int argc, char **argv);
void	ft_free_arr(int argc, char **argv);
int		*step_one(int argc, char **argv, size_t *size);
void	step_two(int *a, size_t size);
void	fix_three(t_data *stacks);
void	algo(t_data	*s);
char	**get_args(int argc, char **argv);
void	errorcheck(int argc, char **argv);
int		*get_a(char **args);
size_t	get_size(char **args);
void	solve(t_data *stacks);

#endif