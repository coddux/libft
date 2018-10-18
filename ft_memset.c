/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 09:16:36 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:04:38 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *v, int c, size_t len)
{
	size_t			i;
	unsigned char	*sv;

	i = 0;
	sv = (unsigned char*)v;
	while (i < len)
	{
		sv[i] = (unsigned char)c;
		i = i + 1;
	}
	return (sv);
}
