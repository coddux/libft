/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_int_find_minmax.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/20 13:43:30 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/20 14:23:03 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_int_find_minmax(int c_sum, int c_min, int c_max)
{
	int cmin;
	int cmax;

	cmin = ft_int_min(&c_min, c_sum);
	cmax = ft_int_max(&c_max, c_sum);
}
