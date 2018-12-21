/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 10:11:58 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:05:29 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	ft_putnbr(int n)
{
	long	nl;

	nl = (long)n;
	if (nl < 0)
	{
		ft_putchar('-');
		nl = -nl;
	}
	if (nl < 10)
		ft_putchar(nl + '0');
	else
	{
		ft_putnbr(nl / 10);
		ft_putchar((nl % 10) + '0');
	}
}
