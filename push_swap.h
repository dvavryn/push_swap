/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:07:32 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/02 00:52:05 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_data
{
	int		*a;
	int		*b;
	size_t	sa;
	size_t	sb;
}			t_data;
char	**get_args(int argc, char **argv);
void	errorcheck(int argc, char **argv);
void	errorcheck_minmax(int argc, char **argv);
void	errorcheck_char(int argc, char **argv);
void	errorcheck_double(int argc, char **argv);
void	ft_free_arr(int argc, char **arr);
int		*step_one(int argc, char **argv, size_t	*size);
int		*step_one(int argc, char **argv, size_t *size);
int		*get_a(char **argv);
size_t	get_size(char **arr);
void	step_two(int *a, size_t	size);
void	algo(t_data	*stacks);

//tmp
void	tmp_print_tab(int *tab, size_t	size);
void	tmp_print_arr(char **args);

void	sa(t_data *stacks);
void	sb(t_data *stacks);
void	ss(t_data *stacks);
void	pa(t_data *stacks);
void	pb(t_data *stacks);
void	ra(t_data *stacks);
void	rb(t_data *stacks);
void	rr(t_data *stacks);
void	rra(t_data *stacks);
void	rrb(t_data *stacks);
void	rrr(t_data *stacks);

# include <stdio.h>

#endif