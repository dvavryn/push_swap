/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:07:32 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/01 22:41:05 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

# include <stdio.h>

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

#endif