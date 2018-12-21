/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:10:28 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:09:47 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_strncmp(char const *str1, char const *str2, size_t size)
{
	size_t i;

	i = 0;
	while ((str1[i] != '\0') && (str2[i] != '\0') && (str1[i] == str2[i])
			&& (i < size))
		i = i + 1;
	if (i == size)
		return ((unsigned char)str1[i - 1] - (unsigned char)str2[i - 1]);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
