/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 18:17:31 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/21 13:50:32 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_getnbr(char *str)
{
	int	i;
	int	n;
	int	neg;

	i = 0;
	n = 0;
	neg = 1;
	if (str[0] == '-')
	{
		neg = -1;
		i = i + 1;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = (n * 10) + str[i] - '0';
		i = i + 1;
	}
	return (neg * n);
}