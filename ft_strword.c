/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strword.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/22 18:34:41 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 09:53:50 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strword(char const *s, char c)
{
	int		i;
	int		wd;

	i = 0;
	wd = 0;
	while ((s[i] == c)  && s[i])
		i = i + 1;
	while (s[i])
	{
		while ((s[i] != c) && (s[i]))
			i = i + 1;
		wd = wd + 1;
		while ((s[i] == c) && (s[i]))
			i = i + 1;
	}
	return (wd);
}
