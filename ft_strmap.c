/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 17:54:49 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:09:16 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	size_t	i;
	char	*map;

	i = 0;
	if ((str == NULL) || (f == NULL))
		return (NULL);
	if (!(map = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		map[i] = f(str[i]);
		i = i + 1;
	}
	map[i] = '\0';
	return (map);
}
