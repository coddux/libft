/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_int_max.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/08 16:44:36 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/20 11:53:46 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_int_max(int *vref, int vsum)
{
	int	v_tmp;

	v_tmp = *vref;
	if (v_tmp < vsum)
		v_tmp = vsum;
	return (v_tmp);
}
