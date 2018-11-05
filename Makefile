# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/04 12:29:02 by alepercq     #+#   ##    ##    #+#        #
#    Updated: 2018/11/05 16:25:52 by alepercq    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

## Configutation ##
#CC			=	@gcc
CC			=	gcc
CFLAGS		+=	-Wall -Wextra -Werror
#AR			=	@ar
AR			=	ar
ARFLAGS		=	ru
#MKDIR		=	@mkdir -p
MKDIR		=	mkdir -p
#RM			=	@rm
RM			=	rm


## Colors        ##
white		=	\033[0m
red			=	\033[31m
green		=	\033[32m
yellow		=	\033[33m


## Files         ##
NAME		=	libft.a

PATH_INC	=	includes/
PATH_SRC	=	
PATH_OBJ	=	obj/
PATH_ALL	=	$(PATH_OBJ)

INCLUDE		=	libft.h
#INCLUDES	=	$(addprefix $(PATH_INC), $(wildcard *.h))
INCLUDES	=	$(addprefix $(PATH_INC), $(INCLUDE))

SRC			=	ft_atoi.c \
				ft_bzero.c \
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
				ft_error.c \
				ft_intabs.c \
				ft_intmintriple.c \
				ft_intpower.c \
				ft_intsqrt.c \
				ft_intswap.c \
				ft_isblanc.c \
				ft_lstrev.c \
				ft_lstlast.c \
				ft_lstsize.c \
				ft_memrealloc.c \
				ft_putuchar_fd.c \
				ft_putustr_fd.c \
				ft_strrev.c \
				ft_strline.c \
				ft_strswap.c \
				ft_strword.c \
				get_next_line.c
SRCS		=	$(addprefix $(PATH_SRC), $(SRC))

OBJ			=	$(SRC:.c=.o)
OBJS		=	$(addprefix $(PATH_OBJ), $(OBJ))


## Rules         ##
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $?
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> Libft compiled ${yellow}     [OK]${white}"

$(PATH_ALL):
	$(MKDIR) $@
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> Libft make dir obj ${yellow} [OK]${white}"

$(MSG_OBJ):
	@echo "${green}-> Libft build objet ${yellow}  [OK]${white}"

$(PATH_OBJ)%.o: $(PATH_SRC)%.c $(INCLUDES) | $(PATH_ALL) $(MSG_OBJ)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@
#	$(echo \e[1;31mError\e[0m)

clean:
	$(RM) -rf $(PATH_OBJ)
#	$(RM) -f $(OBJ)
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> Libft clean ${yellow}        [OK]${white}"

fclean: clean
	$(RM) -f $(NAME)
#	$(echo \e[1;31mError\e[0m)
	@echo "${green}-> Libft full clean ${yellow}   [OK]${white}"

re: fclean all
