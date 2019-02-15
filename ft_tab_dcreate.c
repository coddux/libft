/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tab_dcreate.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/15 17:54:50 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/15 17:56:29 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

double		**ft_tab_dcreate(int line, int column, double flt)
{
	int		i;
	int		j;
	double	**d_tab;

	i = 0;
	if (!(d_tab = (double**)malloc(sizeof(double*) * line)))
		return (NULL);
	while (i < line)
	{
		j = 0;
		if (!(d_tab[i] = (double*)malloc(sizeof(double) * column)))
			return (NULL);
		while (j < column)
		{
			d_tab[i][j] = flt;
			j = j + 1;
		}
		i = i + 1;
	}
	return (d_tab);
}
