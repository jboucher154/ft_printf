# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jebouche <jebouche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 16:53:06 by jebouche          #+#    #+#              #
#    Updated: 2022/11/16 17:09:46 by jebouche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =  srcs/f_isalpha.c srcs/f_isdigit.c srcs/f_isalnum.c srcs/f_isascii.c \
		srcs/f_isprint.c srcs/f_strlen.c srcs/f_memset.c srcs/f_bzero.c \
		srcs/f_memcpy.c srcs/f_toupper.c srcs/f_tolower.c \
		srcs/f_strchr.c srcs/f_strrchr.c srcs/f_strncmp.c srcs/f_memchr.c \
		srcs/f_memcmp.c srcs/f_memmove.c srcs/f_strlcpy.c srcs/f_strnstr.c \
		srcs/f_strlcat.c srcs/f_strdup.c srcs/f_calloc.c srcs/f_atoi.c \
		srcs/f_substr.c srcs/f_strjoin.c srcs/f_strtrim.c srcs/f_split.c \
		srcs/f_itoa.c srcs/f_strmapi.c srcs/f_striteri.c srcs/f_putchar_fd.c \
		srcs/f_putstr_fd.c srcs/f_putendl_fd.c srcs/f_putnbr_fd.c


OBJS =  ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
		ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_toupper.o ft_tolower.o \
		ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_memmove.o \
		ft_strlcpy.o ft_strnstr.o ft_strlcat.o ft_strdup.o ft_calloc.o ft_atoi.o \
		ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o \
		ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

DEPS = -Iincludes/libft.h -Iincludes/ft_printf.h

CC = cc

CFLAGS = -Wall -Werror -Wextra $(DEPS)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re