/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_power.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 12:53:43 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 15:10:47 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_power(int nb, int pwr)
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
