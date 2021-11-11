# **************************************************************************** #
#                                                                              #
#                                                            :::      :::::::: #
# Makefile                                                 :+:      :+:    :+: #
#                                                        +:+ +:+         +:+   #
# By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+      #
#                                                    +#+#+#+#+#+   +#+         #
# Created: 2021/11/02 19:33:08 by sjuanena                #+#    #+#           #
# Updated: 2021/11/02 19:33:08 by sjuanena               ###   ########.fr     #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft.a

LIB_DIR		= libft/
OBJ_DIR		= obj/
SRC_DIR		= srcs/
HEAD_DIR	= header/

SRCS_MAND	=	ft_printf.c/

OBJS_MAND	= ${SRCS_MAND:.c=.o}

OBJS_BON	= ${SRCS_BON:.c=.o}

CC		= cc

RM		= rm -rf

AR		= ar rcs

RANLIB		= ranlib

CFLAGS += -Wall -Werror -Wextra -g

LFLAGS += -I.

all	:	$(NAME)
		@echo Compiling Library "libft.a" File "Only Mandatory Part": $@ ...

$(NAME)	:	$(OBJS_MAND)
		@echo Compiling Library File: $@ ...
		$(AR) $(NAME) $(OBJS_MAND)
		$(RANLIB) $(NAME)

%.o:	%.c
		@echo Compiling Binary Files: $@ ...
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)

clean	:	
		@echo Cleaning The .o Generated Files: $@ ...
		$(RM) ${OBJS_MAND} ${OBJS_BON}


fclean	:	clean
		@echo Cleaning All ".o & libft.a" Generated Files:
		$(RM) $(NAME)

re	:	fclean all
		@echo Cleaning All ".o & libft.a" Generated Files And Remake Everything:


.PHONY:		all clean fclean re
