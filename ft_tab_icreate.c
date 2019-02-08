/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tab_icreate.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 11:42:58 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 11:58:42 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		**ft_tab_icreate(int line, int column, int nb)
{
	int		i;
	int		j;
	int		**i_tab;

	i = 0;
	if (!(i_tab = (int**)malloc(sizeof(int*) * line)))
		return (NULL);
	while (i < line)
	{
		j = 0;
		if (!(i_tab[i] = (int*)malloc(sizeof(int) * column)))
			return (NULL);
		while (j < column)
		{
			i_tab[i][j] = nb;
			j = j + 1;
		}
		i = i + 1;
	}
	return (i_tab);
}
