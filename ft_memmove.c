/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 12:52:37 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:04:30 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*dstuc;
	unsigned char	*srcuc;

	srcuc = (unsigned char*)src;
	dstuc = (unsigned char*)dst;
	if (srcuc <= dstuc)
	{
		while (len > 0)
		{
			dstuc[len - 1] = srcuc[len - 1];
			len = len - 1;
		}
	}
	else
		ft_memcpy(dstuc, srcuc, len);
	return (dstuc);
}
