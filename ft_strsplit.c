/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 16:11:41 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:10:38 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "inc/libft.h"

static int		wn(char const *s, char c)
{
	int		i;
	int		wd;

	i = 0;
	wd = 0;
	while ((s[i] == c) && s[i])
		i = i + 1;
	while (s[i])
	{
		while ((s[i] != c) && (s[i]))
			i = i + 1;
		wd = wd + 1;
		while ((s[i] == c) && (s[i]))
			i = i + 1;
	}
	return (wd);
}

static	char	**wtab(char **wlst, int wd, char const *s, char c)
{
	int		i;
	int		wi;
	int		wj;

	i = 0;
	while ((s[i] == c) && s[i])
		i = i + 1;
	wi = 0;
	while (wi < wd)
	{
		wj = 0;
		while ((s[i] != c) && (s[i]))
		{
			wlst[wi][wj] = s[i];
			wj = wj + 1;
			i = i + 1;
		}
		while ((s[i] == c) && (s[i]))
			i = i + 1;
		wlst[wi][wj] = '\0';
		wi = wi + 1;
	}
	wlst[wi] = 0;
	return (wlst);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		wi;
	int		wj;
	char	**wl;

	if ((!s) || (!(wl = (char**)malloc(sizeof(char*) * (wn(s, c) + 1)))))
		return (0);
	i = 0;
	while ((s[i] == c) && s[i])
		i = i + 1;
	wi = -1;
	while (wi++ < wn(s, c))
	{
		wj = 0;
		while ((s[i] != c) && (s[i]))
		{
			wj = wj + 1;
			i = i + 1;
		}
		while ((s[i] == c) && (s[i]))
			i = i + 1;
		if (!(wl[wi] = (char*)malloc(sizeof(char) * (wj + 1))))
			return (0);
	}
	return (wtab(wl, wn(s, c), s, c));
}
