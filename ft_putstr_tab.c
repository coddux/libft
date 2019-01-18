/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_tab.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/18 12:52:41 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 13:14:33 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	ft_putstr_tab(char **s_tab)
{
	int		i;

	i = 0;
	while (s_tab[i] != NULL)
	{
		ft_putstr(s_tab[i]);
		if (s_tab[i][ft_strlen(s_tab[i]) - 1] != '\n')
			ft_putchar('\n');
		i = i + 1;
	}
}
