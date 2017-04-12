# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doriol <doriol@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/28 04:00:07 by doriol            #+#    #+#              #
#    Updated: 2017/04/12 16:36:13 by doriol           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testlib

SRCS =	../*.c

SRCS2 =	../*.o

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) main.c

clean:
	@rm -f $(SRCS2)

fclean: clean
	@rm -f $(NAME)

re: fclean all
