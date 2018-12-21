/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 21:37:56 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:10:30 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	size_t	imid;
	char	tmp;

	i = 0;
	imid = ft_strlen(str) / 2;
	j = ft_strlen(str) - 1;
	while (i < imid)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i = i + 1;
		j = j - 1;
	}
	return (str);
}
