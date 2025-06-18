/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:26:05 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/18 09:21:34 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_data
{
	struct s_data	*prev;
	int				value;
	int				index;
	struct s_data	*next;
}	t_data;

void	errorcheck(int argc, char **args);
void	error_exit(void);

// Free
void	free_arr(char **arr);
void	free_data(t_data *top);

// DEVELOPING
int		issorted(t_data *a);
void	print_data(t_data *a, t_data *b);

// SORTING
void	sort(t_data *a);

// Stack initialization
t_data	*get_stack(int argc, char **argv);


// Operations
void	swap(t_data **stack);
void	push(t_data **stack_a, t_data **stack_b);
void	rotate(t_data **stack);
void	revrotate(t_data **stack);

// Operations + print
void	swap_(char c, t_data **stack_a, t_data **stack_b);
void	push_(char c, t_data **stack_a, t_data **stack_b);
void	rotate_(char c, t_data **stack_a, t_data **stack_b);
void	rrotate_(char c, t_data **stack_a, t_data **stack_b);



#endif