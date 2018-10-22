/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_intabs.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 14:12:13 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 10:51:59 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_intabs(int n)
{
	if (n < 0)
		n = -n;
	else if ((n == -0) || (n == 0))
		n = 0;
	return (n);
}