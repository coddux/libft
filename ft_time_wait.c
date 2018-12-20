/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_time_wait.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/08 16:44:36 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/20 11:54:34 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_time_wait(unsigned long int time_delay)
{
	unsigned long int	itime;
	unsigned long int	time_max;

	itime = 0;
	time_max = time_delay * 100000;
	while (itime <= time_max)
		itime = itime + 1;
}
