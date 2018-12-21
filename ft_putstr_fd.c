/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 10:07:26 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:07:03 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int				i;
	unsigned char	*stru;

	i = 0;
	stru = (unsigned char*)str;
	if (stru != NULL)
	{
		while (stru[i] != '\0')
		{
			ft_putchar_fd(stru[i], fd);
			i = i + 1;
		}
	}
}
