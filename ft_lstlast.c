/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstlast.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 16:51:27 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/02 16:56:39 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstlast(t_list *alist)
{
	t_list	*tmplst;

	tmplst = alist;
	if (!alist)
		return (NULL);
	while (tmplst)
	{
		tmplst = tmplst->next;
	}
	return (tmplst);
}
