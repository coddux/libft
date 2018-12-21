/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 10:46:55 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:03:52 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstuc;
	unsigned char	*srcuc;

	i = 0;
	srcuc = (unsigned char*)src;
	dstuc = (unsigned char*)dst;
	if (dstuc == srcuc)
		return (srcuc);
	while ((n != 0) && (i < n))
	{
		dstuc[i] = srcuc[i];
		if (srcuc[i] == (unsigned char)c)
			return (dstuc + i + 1);
		i = i + 1;
	}
	return (NULL);
}
