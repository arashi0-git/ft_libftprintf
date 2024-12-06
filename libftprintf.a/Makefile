# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aryamamo <aryamamo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 14:58:42 by aryamamo          #+#    #+#              #
#    Updated: 2024/12/04 12:16:55 by aryamamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_printf.c\
	srcs/ft_printf_utils.c\
	srcs/ft_print_ptr.c\
	srcs/ft_print_unsigned.c\
	srcs/ft_treat_hexa.c\

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(LIBFTDIR)/$(LIBFTNAME):
	make -C $(LIBFTDIR)

$(NAME): $(LIBFTDIR)/$(LIBFTNAME) $(OBJS)
	cp $(LIBFTDIR)/$(LIBFTNAME) .
	mv $(LIBFTNAME) $(NAME)
	ar -r $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make -C $(LIBFTDIR) clean
	
	
fclean: clean
	rm -f $(NAME)
	make -C $(LIBFTDIR) fclean
	
re: fclean all
