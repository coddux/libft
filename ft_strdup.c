/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 17:07:01 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:08:15 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

char	*ft_strdup(char const *src)
{
	char	*mem;

	if (!(mem = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	ft_strcpy(mem, src);
	return (mem);
}
