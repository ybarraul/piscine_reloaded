# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybarraul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:16 by ybarraul          #+#    #+#              #
#    Updated: 2017/11/08 10:22:03 by ybarraul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
ICLD = include/.
FILES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
GCC =  gcc -Wall -Wextra -Werror

all : OP

OP :
	$(GCC) -I $(ICLD) -c $(FILES)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean :
		/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean : clean
		/bin/rm -f $(NAME)

re :fclean all
