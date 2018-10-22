/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/22 11:02:50 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 13:57:02 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lsrev(t_list *blst)
{
	t_list	*alst;
	t_list	*tmplst;
	t_list	*clst;

	alst = NULL;
	tmplst = blst;
	while (tmplst != NULL)
	{
		clst = tmplst->next;
		tmplst->next = alst;
		alst = tmplst;
		tmplst = clst;
	}
	blst = alst;
	return (blst);
}
