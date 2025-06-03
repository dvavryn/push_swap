/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:33:07 by dvavryn           #+#    #+#             */
/*   Updated: 2025/06/03 13:30:08 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorcheck(int argc, char **argv)
{
	errorcheck_char(argc, argv);
	errorcheck_minmax(argc, argv);
	errorcheck_double(argc, argv);
}
