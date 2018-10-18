/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:13:07 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:11:08 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strtrim(char const *str)
{
	size_t	ibeg;
	size_t	iend;
	char	*trim;

	if (str == NULL)
		return (NULL);
	ibeg = 0;
	iend = ft_strlen(str);
	while (ft_isblanc(str[ibeg]) == 1)
		ibeg = ibeg + 1;
	while (ft_isblanc(str[iend - 1]) == 1)
		iend = iend - 1;
	if ((ibeg == ft_strlen(str)) || (iend == 0))
		return (ft_strnew(0));
	trim = ft_strsub(str, ibeg, iend - ibeg);
	if (trim)
		return (trim);
	return (NULL);
}
