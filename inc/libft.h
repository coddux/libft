/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 12:27:38 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/21 13:50:20 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUFF_SIZE 4096

/*
** structure definition
*/
typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** function integer
*/
int				ft_atoi(char const *str);
int				ft_int_abs(int n);
void			ft_int_find_minmax(int c_sum, int c_min, int c_max);
int				ft_int_max(int *vref, int vsum);
int				ft_int_min(int *vref, int vsum);
int				ft_int_power(int nb, int pwr);
int				ft_int_sqrt(int nb);
void			ft_int_swap(int *a, int *b);
int				ft_int_triple_min(int vala, int valb, int valc);

/*
** function is
*/
int				ft_isalnum(int i);
int				ft_isalpha(int i);
int				ft_isascii(int i);
int				ft_isblanc(char c);
int				ft_isdigit(int i);
int				ft_isprime(int p);
int				ft_isprint(int i);

/*
** function linked list
*/
void			ft_lstadd(t_list **alst, t_list *blst);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstlast(t_list *alist);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
t_list			*ft_lstrev(t_list *blst);
int				ft_lstsize(t_list *alist);

/*
** function memory
*/
void			ft_bzero(void *v, size_t n);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, void const *src, int c, size_t n);
void			*ft_memchr(void const *v, int c, size_t n);
int				ft_memcmp(void const *v1, void const *v2, size_t n);
void			*ft_memcpy(void *dst, void const *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dst, void const *src, size_t len);
void			*ft_memrealloc(void *v, size_t size);
void			*ft_memset(void *v, int c, size_t len);

/*
** function screen display
*/
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putuchar_fd(int fd, wchar_t c);
void			ft_putendl(char const *str);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr(char const *str);
void			ft_putstr_fd(char const *str, int fd);
void			ft_putustr_fd(int fd, wchar_t *str);

/*
** function string
*/
char			*ft_itoa(int n);
char			*ft_strcat(char *str1, char const *str2);
char			*ft_strchr(char const *str, int c);
void			ft_strclr(char *str);
int				ft_strcmp(char const *str1, char const *str2);
char			*ft_strcpy(char *dst, char const *src);
void			ft_strdel(char **as);
char			*ft_strdup(char const *src);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *str, void (*f)(char *));
void			ft_striteri(char *str, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, char const *src, size_t size);
size_t			ft_strlen(char const *str);
int				ft_strline(char *str);
char			*ft_strmap(char const *str, char (*f)(char));
char			*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char			*ft_strncat(char *str1, char const *str2, size_t len);
int				ft_strncmp(char const *str1, char const *str2, size_t size);
char			*ft_strncpy(char *dst, char const *src, size_t len);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(char const *str, char const *to_find, size_t len);
char			*ft_strrev(char *str);
char			*ft_strrchr(char const *str, int c);
char			**ft_strsplit(char const *str, char c);
char			*ft_strstr(char const *str, char const *to_find);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			ft_strswap(char *str1, char *str2);
char			*ft_strtrim(char const *str);
int				ft_strword(char const *s, char c);
int				ft_toupper(int i);
int				ft_tolower(int i);

/*
** function file
*/
int				get_next_line(const int fd, char **line);

/*
** function time
*/
void			ft_time_wait(unsigned long int time_delay);

/*
** function miscellenaous
*/
void			ft_error(int error, char *filename);

#endif
