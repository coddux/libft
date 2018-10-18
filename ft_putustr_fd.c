/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putustr_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 13:34:08 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:07:18 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putustr_fd(int fd, wchar_t *str)
{
	write(fd, &str, ft_strlen((char const *)str));
}
