/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_intmitriple.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 16:19:55 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 10:59:05 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_intmintriple(int vala, int valb, int valc)
{
	int		valmin;

	valmin = vala;
	if (valmin > valb)
		valmin = valb;
	if (valmin > valc)
		valmin = valc;
	return (valmin);
}
