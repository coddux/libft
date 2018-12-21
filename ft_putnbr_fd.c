/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 10:38:57 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:06:49 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;

	nl = (long)n;
	if (nl < 0)
	{
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl < 10)
		ft_putchar_fd((nl + '0'), fd);
	else
	{
		ft_putnbr_fd((nl / 10), fd);
		ft_putchar_fd(((nl % 10) + '0'), fd);
	}
}
