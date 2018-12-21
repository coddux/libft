/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 10:34:50 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:04:15 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t			i;
	unsigned char	*dstuc;
	unsigned char	*srcuc;

	srcuc = (unsigned char*)src;
	dstuc = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		dstuc[i] = srcuc[i];
		i = i + 1;
	}
	return (dstuc);
}
