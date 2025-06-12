/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:26:05 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/12 14:38:23 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_data
{
	struct s_data	*prev;
	int				value;
	struct s_data	*next;
} t_data;

char	**one(char *arg);
void	free_arr(int argc, char **arr);
void	ft_error(int argc, char **args);
void	errorcheck(int argc, char **args);


#endif