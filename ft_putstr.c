/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 09:39:50 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:06:56 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	ft_putstr(char const *str)
{
	int				i;
	unsigned char	*stru;

	i = 0;
	stru = (unsigned char*)str;
	if (stru != NULL)
	{
		while (stru[i] != '\0')
		{
			ft_putchar(stru[i]);
			i = i + 1;
		}
	}
}
