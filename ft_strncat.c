/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 10:48:58 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:09:39 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *str1, char const *str2, size_t len)
{
	size_t i;
	size_t j;

	i = (size_t)ft_strlen(str1);
	j = 0;
	while ((j < len) && (str2[j] != '\0'))
	{
		str1[i + j] = str2[j];
		j = j + 1;
	}
	str1[i + j] = '\0';
	return (str1);
}
