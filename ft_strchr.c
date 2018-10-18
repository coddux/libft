/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 16:30:35 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:07:37 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(char const *str, int c)
{
	size_t		i;

	i = 0;
	if ((char)c == '\0')
		return ((char*)(str + ft_strlen(str)));
	while ((str[i] != (char)c) && (str[i] != '\0'))
		i = i + 1;
	if (str[i] == (char)c)
		return ((char*)(str + i));
	return (NULL);
}
