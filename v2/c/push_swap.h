/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:10:07 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/15 22:07:10 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

int		check_args(char **argv);
int		*get_tab(char **argv, size_t size);

void	help_print(int *a, int *b, size_t size);

void	swap(int *tab);
void	ss(int *a, int *b);

void	push(int *tab1, int *tab2, size_t size);

void	rotate(int *tab, size_t size);
void	rr(int *a, int *b, size_t size);

void	rrotate(int *tab, size_t size);
void	rrr(int *a, int *b, size_t size);

void	steps(int *a, int *b, size_t size);


#endif