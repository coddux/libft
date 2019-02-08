# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/04 12:29:02 by alepercq     #+#   ##    ##    #+#        #
#    Updated: 2019/02/08 12:25:46 by alepercq    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

## Configutation ##
CC			=	@gcc
CFLAGS		+=	-Wall -Wextra -Werror
AR			=	@ar
ARFLAGS		=	ru
MKDIR		=	@mkdir -p
RM			=	@rm


## Colors        ##
white		=	\033[0m
red			=	\033[31m
green		=	\033[32m
yellow		=	\033[33m


## Files         ##
NAME		=	libft.a
LIBS		=	libft

PATH_INC	=	inc/
PATH_SRC	=	
PATH_OBJ	=	obj/
PATH_ALL	=	$(PATH_OBJ)

INCLUDE		=	libft.h
#INCLUDES	=	$(addprefix $(PATH_INC), $(wildcard *.h))
INCLUDES	=	$(addprefix $(PATH_INC), $(INCLUDE))

SRC			=	ft_atoi.c ft_int_abs.c \
				ft_int_find_minmax.c ft_int_max.c ft_int_min.c ft_int_mod.c \
				ft_int_triple_min.c ft_int_power.c ft_int_sqrt.c \
				ft_int_swap.c \
				ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblanc.c \
				ft_isdigit.c ft_isprime.c ft_isprint.c \
				ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
				ft_lstlast.c ft_lstmap.c ft_lstnew.c \
				ft_lstrev.c ft_lstsize.c \
				ft_bzero.c \
				ft_memalloc.c ft_memrealloc.c \
				ft_memccpy.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
				ft_memdel.c ft_memmove.c ft_memset.c \
				ft_putchar.c ft_putchar_fd.c ft_putuchar_fd.c ft_chrtostr.c \
				ft_putendl.c ft_putendl_fd.c \
				ft_putnbr.c ft_putnbr_fd.c \
				ft_putstr.c ft_putstr_tab.c ft_putstr_fd.c ft_putustr_fd.c \
				ft_itoa.c ft_getnbr.c \
				ft_strcat.c ft_strlcat.c ft_strncat.c ft_strchr.c ft_strclr.c \
				ft_strcmp.c ft_strncmp.c \
				ft_strcpy.c ft_strncpy.c \
				ft_strdel.c ft_strdup.c ft_strequ.c ft_strnequ.c \
				ft_striter.c ft_striteri.c \
				ft_strjoin.c  ft_strlen.c ft_strline.c \
				ft_strmap.c ft_strmapi.c  ft_strnew.c \
				ft_strnstr.c ft_strrchr.c ft_strstr.c \
				ft_strsplit.c ft_strsub.c ft_strswap.c \
				ft_strword.c ft_strtrim.c \
				ft_toupper.c ft_tolower.c \
				ft_file_open.c ft_file_read.c get_next_line.c \
				ft_error.c \
				ft_tab_icreate.c ft_tab_screate.c \
				ft_time_wait.c
				
SRCS		=	$(addprefix $(PATH_SRC), $(SRC))

OBJ			=	$(SRC:.c=.o)
OBJS		=	$(addprefix $(PATH_OBJ), $(OBJ))


## Rules         ##
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $?
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> ${LIBS} compiled ${yellow}     [OK]${white}"

$(PATH_ALL):
	$(MKDIR) $@
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> ${LIBS} make dir obj ${yellow} [OK]${white}"

$(MSG_OBJ):
	@echo "${green}-> ${LIBS} build objet ${yellow}  [OK]${white}"

$(PATH_OBJ)%.o: $(PATH_SRC)%.c $(INCLUDES) | $(PATH_ALL) $(MSG_OBJ)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@
#	$(echo \e[1;31mError\e[0m)

clean:
	$(RM) -rf $(PATH_OBJ)
#	$(RM) -f $(OBJ)
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> ${LIBS} clean ${yellow}        [OK]${white}"

fclean: clean
	$(RM) -f $(NAME)
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> ${LIBS} full clean ${yellow}   [OK]${white}"

re: fclean all
