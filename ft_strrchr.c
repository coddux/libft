/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 17:37:37 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:10:22 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
		return ((char*)(str + ft_strlen(str)));
	while ((str[i] != (char)c) && (i >= 0))
		i = i - 1;
	if (str[i] == (char)c)
		return ((char*)(str + i));
	return (NULL);
}
