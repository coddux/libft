/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_min_triple_int.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 16:19:55 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:04:45 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_min_triple_int(int vala, int valb, int valc)
{
	int		valmin;

	valmin = vala;
	if (valmin > valb)
		valmin = valb;
	if (valmin > valc)
		valmin = valc;
	return (valmin);
}
