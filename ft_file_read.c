/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_file_read.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/18 13:09:35 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 13:13:55 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

char	*ft_file_read(int fd, char *s_file)
{
	int		ibuf;
	char	*s_read;
	char	*s_buff;

	if ((read(fd, s_file, 0) < 0) || !(s_buff = ft_strnew(BUFF_SIZE)))
		return (NULL);
	while ((ibuf = read(fd, s_buff, BUFF_SIZE)) > 0)
	{
		s_buff[ibuf] = '\0';
		if (s_file == NULL)
			s_file = ft_strdup(s_buff);
		else
		{
			s_read = ft_strjoin(s_file, s_buff);
			ft_memdel((void **)&s_file);
			s_file = s_read;
		}
	}
	free(s_buff);
	return (s_file);
}
