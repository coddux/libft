/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 11:56:43 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:03:44 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	if ((!(mem = (char*)malloc(sizeof(char) * size))) || (size == 0))
		return (NULL);
	i = 0;
	while (i < size)
	{
		mem[i] = 0;
		i = i + 1;
	}
	return (mem);
}
