/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_error.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 18:17:31 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/21 13:50:32 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

void	ft_error(int error, char *filename)
{
	ft_putstr_fd(filename, 2);
	ft_putstr_fd(": ", 2);
	if (error == EACCES)
		ft_putstr_fd("Permission denied\n", 2);
	else if (error == ENOENT)
		ft_putstr_fd("No such file or directory\n", 2);
	else if (error == EISDIR)
		ft_putstr_fd("Is a directory\n", 2);
	else if (error == ENAMETOOLONG)
		ft_putstr_fd("File name too long\n", 2);
}
