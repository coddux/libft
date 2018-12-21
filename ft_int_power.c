/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_int_power.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 12:53:43 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/20 14:29:03 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int	ft_int_power(int nb, int pwr)
{
	int i;
	int	power;

	if ((nb == 0) || (pwr == 0) || (!nb) || (!pwr))
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i < pwr)
	{
		power = nb * nb;
		i = i + 1;
	}
	return (power);
}
