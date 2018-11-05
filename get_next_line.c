/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 20:20:01 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/05 16:08:06 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*gnl_lstinit(int fd, t_list **gnlst)
{
	t_list	*tmplst;

	tmplst = *gnlst;
	while (tmplst != NULL)
	{
		if ((int)tmplst->content_size == fd)
			return (tmplst);
		tmplst = tmplst->next;
	}
	tmplst = ft_lstnew(NULL, 0);
	tmplst->content_size = (size_t)fd;
	ft_lstadd(gnlst, tmplst);
	return (tmplst);
}

void		gnl_fileread(t_list *lread)
{
	int		ibuf;
	char	*stread;
	char	strbuf[BUFF_SIZE + 1];

	while (((lread->content == NULL) || (!ft_strchr(lread->content, '\n')))
			&& (ibuf = read((int)lread->content_size, strbuf, BUFF_SIZE)))
	{
		strbuf[ibuf] = '\0';
		if (lread->content == NULL)
			lread->content = (void*)ft_strdup(strbuf);
		else
		{
			stread = ft_strjoin((char*)lread->content, strbuf);
			ft_memdel(&lread->content);
			lread->content = (void*)stread;
		}
	}
}

void		gnl_linefind(char **line, t_list *lfind)
{
	int		imin;
	int		imax;
	char	*sfind;
	char	*stmp;

	sfind = (char*)lfind->content;
	imax = (int)ft_strlen(sfind);
	imin = 0;
	while ((sfind[imin] != '\n') && (imin <= imax))
		imin = imin + 1;
	*line = ft_strsub(sfind, 0, imin);
	if ((imin - 1) == imax)
		stmp = ft_strnew(0);
	else
		stmp = ft_strsub(sfind, (imin + 1), (imax - (imin + 1)));
	lfind->content = ft_strcpy(lfind->content, stmp);
	free(stmp);
}

int			get_next_line(const int fd, char **line)
{
	static t_list	*gnlst = NULL;
	t_list			*tmplst;
	char			buffer[BUFF_SIZE + 1];

	if ((fd < 0) || (!line) || ((int)read(fd, buffer, 0) < 0)
		|| (BUFF_SIZE < 1))
		return (-1);
	tmplst = gnl_lstinit(fd, &gnlst);
	gnl_fileread(tmplst);
	if ((int)ft_strlen(tmplst->content) != 0)
	{
		gnl_linefind(line, tmplst);
		return (1);
	}
	else
		return (0);
}
