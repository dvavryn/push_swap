/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:07:31 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/04 23:20:18 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../../libft/libft.h"

typedef struct	s_stack
{
	struct s_stack	*prev;
	int				value;
	struct s_stack	*next;
}		t_stack;


#endif