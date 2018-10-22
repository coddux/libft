/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_intpower.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 12:53:43 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 10:52:42 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_intpower(int nb, int pwr)
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
