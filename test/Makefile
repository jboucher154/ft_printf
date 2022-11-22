# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 16:53:06 by jebouche          #+#    #+#              #
#    Updated: 2022/11/22 16:49:56 by jebouche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB = libft.a

# SRCS =  ft_printf.c conversion.c flags.c handle_specifiers.c legend.c \
# 		characters.c hexadecimal.c itoa_base.c numbers.c padding.c \
# 		percent.c struct.c unsigned.c

SRCS =  ft_printf.c convert1.c handle_specifiers.c char1.c 
		
		
# OBJS =  ft_printf.o conversion.o flags.o handle_specifiers.o legend.o \
# 		characters.o hexadecimal.o itoa_base.o numbers.o padding.o \
# 		percent.o struct.o unsigned.o
		
OBJS =  ft_printf.o convert1.o handle_specifiers.o char1.o

DEPS = -Ift_printf.h

CC = cc

CFLAGS = -Wall -Werror -Wextra $(DEPS)

all: $(NAME)

$(NAME): lib $(OBJS)
		ar rcs $(NAME) $(OBJS)	

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS)

lib:
		$(MAKE) -C srcs
		cp -r srcs/$(LIB) .
		mv $(LIB) $(NAME)

clean:
		rm -f $(OBJS)
		$(MAKE) clean -C srcs

fclean: clean
		rm -f $(NAME)
		$(MAKE) fclean -C srcs

re: fclean all

bonus: $(NAME)

.PHONY: all clean fclean re

# cp -r srcs/$(LIB) .
# mv $(LIB) $(NAME)