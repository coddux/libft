# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/04 12:29:02 by alepercq     #+#   ##    ##    #+#        #
#    Updated: 2018/10/18 20:04:59 by alepercq    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	=		libft.a

SRCS	=		ft_atoi.c \
				ft_bzero.c \
				ft_error.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_lstadd.c \
				ft_lstdel.c \
				ft_lstdelone.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstiter.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strclr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strsplit.c \
				ft_strsub.c \
				ft_strtrim.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_abs.c \
				ft_isblanc.c \
				ft_power.c \
				ft_putuchar_fd.c \
				ft_putustr_fd.c \
				ft_sqrt.c \
				ft_strrev.c \
				ft_swap.c \
				ft_swapstr.c \
				ft_min_triple_int.c

INCLUDES	=	$(wildcard includes/*.h)

OBJS		=	$(SRCS:.c=.o)

CC			=	@gcc

CFLAGS		+=	-Wall -Wextra -Werror

AR			=	@ar

ARFLAGS		=	rc

RM			=	@rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@printf '\033[32m-> Libft compiled \033[33m    [OK]\n'

$(OBJS): $(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS) -I $(INCLUDES)
	@printf '\033[32m-> Libft build objet \033[33m [OK]\n'

clean:
	$(RM) $(OBJS)
	@printf '\033[32m-> Libft clean \033[33m       [OK]\n'

fclean: clean
	$(RM) $(NAME)
	@printf '\033[32m-> Libft full clean \033[33m  [OK]\n'

re: fclean all
