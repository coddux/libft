/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 19:13:15 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:07:26 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *str1, char const *str2)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(str1);
	j = 0;
	while (j < ft_strlen(str2))
	{
		str1[i + j] = str2[j];
		j = j + 1;
	}
	str1[i + j] = '\0';
	return (str1);
}
