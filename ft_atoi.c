/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 14:52:30 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 17:14:27 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

static int		res_atoi(int neg, long n, int in, int i)
{
	if ((neg == 1) && (n < 0))
		return (-1);
	else if ((neg == -1) && ((i - in) > 11))
		return (0);
	else
		return (neg * n);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	n;
	int		in;

	i = 0;
	neg = 1;
	n = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\r')
			|| (str[i] == '\v') || (str[i] == ' ') || (str[i] == '\f'))
		i = i + 1;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i = i + 1;
	in = i;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = (10 * n) + str[i] - '0';
		i = i + 1;
	}
	return (res_atoi(neg, n, in, i));
}
