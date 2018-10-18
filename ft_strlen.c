/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 14:50:17 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:09:08 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlen(char const *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
