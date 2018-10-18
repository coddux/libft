/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:24:58 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:09:54 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t len)
{
	size_t i;
	size_t nb;

	i = 0;
	nb = (size_t)ft_strlen(src);
	while (i < len)
	{
		if (i > nb)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i = i + 1;
	}
	return (dst);
}
