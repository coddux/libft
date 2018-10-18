/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 17:06:38 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:08:52 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*res;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	if (!(res = (char*)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i = i + 1;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		res[ft_strlen(s1) + i] = s2[i];
		i = i + 1;
	}
	res[ft_strlen(s1) + i] = '\0';
	return (res);
}
