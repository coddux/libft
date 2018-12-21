/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 16:21:46 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:04:08 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_memcmp(void const *v1, void const *v2, size_t n)
{
	size_t			i;
	unsigned char	*sv1;
	unsigned char	*sv2;

	i = 0;
	sv1 = (unsigned char*)v1;
	sv2 = (unsigned char*)v2;
	if (n == 0)
		return (0);
	while ((sv1[i] == sv2[i]) && (i < (n - 1)))
		i = i + 1;
	if (i == n)
		return ((unsigned char)sv1[i - 1] - (unsigned char)sv2[i - 1]);
	return ((unsigned char)sv1[i] - (unsigned char)sv2[i]);
}
