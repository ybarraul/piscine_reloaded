# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybarraul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:50:44 by ybarraul          #+#    #+#              #
#    Updated: 2017/11/07 15:51:29 by ybarraul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FILES = ft_display_file.c
OFILES = ft_display_file.o
GCC = gcc -Wall -Wextra -Werror


all : $(NAME)

$(NAME):
	$(GCC) -o $(NAME) $(FILES)

clean :
	rm -rf $(OFILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all
