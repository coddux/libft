/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 10:59:59 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/20 14:32:30 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

static int		ft_int_length(int n)
{
	int		len;

	len = (n < 0) ? 1 : 0;
	while (n != 0)
	{
		len = len + 1;
		n = n / 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		neg;
	int		l;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (ft_int_abs(n) == 0)
		return (ft_strdup("0"));
	neg = ((n < 0) ? -1 : 0);
	l = ft_int_length(n);
	if (!(str = (char*)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	str[l] = '\0';
	l = l - 1;
	n = ((n < 0) ? -n : n);
	while (l >= 0)
	{
		str[l] = (n % 10) + '0';
		n = n / 10;
		l = l - 1;
	}
	if (neg == -1)
		str[0] = '-';
	return (str);
}
