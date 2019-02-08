/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tab_screate.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 11:43:09 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 11:51:32 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

char	**ft_tab_screate(int line, int column, char c)
{
	int		i;
	int		j;
	char	**s_tab;

	i = 0;
	if (!(s_tab = (char**)malloc(sizeof(char*) * line)))
		return (NULL);
	while (i < line)
	{
		j = 0;
		if (!(s_tab[i] = (char*)malloc(sizeof(char) * column)))
			return (NULL);
		while (j < column)
		{
			s_tab[i][j] = c;
			j = j + 1;
		}
		i = i + 1;
	}
	return (s_tab);
}
