/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_int_mod.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 12:22:04 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 12:27:27 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_int_mod(int nb, int modulo)
{
	if ((modulo == 0) || ((nb % modulo) != 0))
		return (0);
	return (1);
}
