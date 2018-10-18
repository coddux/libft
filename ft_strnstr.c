/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 19:35:52 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:10:15 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(char const *str, char const *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char*)str);
	while ((str[i] != '\0') && (i <= len))
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while ((str[i + j] == to_find[j]) && ((i + j) < len))
			{
				j = j + 1;
				if (j == (size_t)ft_strlen(to_find))
					return ((char*)(str + i));
			}
		}
		i = i + 1;
	}
	return (NULL);
}
