/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:26:05 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/13 15:15:28 by dvavryn          ###   ########.fr       */
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
void	free_arr(char **arr);
char	**ps_split(char *arg);

#endif