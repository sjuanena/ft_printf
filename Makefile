# **************************************************************************** #
#                                                                              #
#                                                            :::      :::::::: #
# Makefile                                                 :+:      :+:    :+: #
#                                                        +:+ +:+         +:+   #
# By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+      #
#                                                    +#+#+#+#+#+   +#+         #
# Created: 2021/11/15 19:50:40 by sjuanena                #+#    #+#           #
# Updated: 2021/11/15 19:50:40 by sjuanena               ###   ########.fr     #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRC=$(wildcard ./*.c)

OBJ=$(patsubst ./%.c, ./%.o, $(SRC))

LIBFT=libft

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

$(NAME): $(OBJ)
		@make -C $(LIBFT)
		@cp libft/libft.a ./$(NAME)
		@ar -rcs $(NAME) $(OBJ)
		@mkdir obj
		@mv $(OBJ) ./obj
		@rm -f $(OBJ)
		@rm -Rf obj

all: $(NAME)

clean:
		@$(RM) $(OBJ)
		@make clean -C $(LIBFT)

fclean: clean
		@${RM} libftprintf.a
		@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re .c .o
