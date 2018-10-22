/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_swapstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 16:12:57 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 12:53:01 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_swapstr(char *str1, char *str2)
{
	char	*swp;

	swp = str1;
	str1 = str2;
	str2 = swp;
}