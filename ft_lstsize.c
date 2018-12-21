/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/22 15:31:18 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 15:38:58 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_lstsize(t_list *alist)
{
	int		i;
	t_list	*scanlist;

	i = 0;
	if (alist != NULL)
	{
		scanlist = alist;
		while (scanlist != NULL)
		{
			scanlist = scanlist->next;
			i = i + 1;
		}
	}
	return (i);
}
