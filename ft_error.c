/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_error.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 18:17:31 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:19:40 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"


void	ft_error(int error, char *filename)
{
	ft_putstr_fd(2, filename);
	ft_putstr_fd(2, ": ");
	if (error == EACCES)
		ft_putstr_fd(2, "Permission denied\n");
	else if (error == ENOENT)
		ft_putstr_fd(2, "No such file or directory\n");
	else if (error == EISDIR)
		ft_putstr_fd(2, "Is a directory\n");
	else if (error == ENAMETOOLONG)
		ft_putstr_fd(2, "File name too long\n");
}
