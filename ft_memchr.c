/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 15:46:45 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:04:00 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	*ft_memchr(void const *v, int c, size_t n)
{
	size_t			i;
	unsigned char	*sv;

	i = 0;
	sv = (unsigned char*)v;
	while (i < n)
	{
		if (sv[i] == (unsigned char)c)
			return ((void*)sv + i);
		i = i + 1;
	}
	return (0);
}
