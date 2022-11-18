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

SRCS =  srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isascii.c \
		srcs/ft_isprint.c srcs/ft_strlen.c srcs/ft_memset.c srcs/ft_bzero.c \
		srcs/ft_memcpy.c srcs/ft_toupper.c srcs/ft_tolower.c \
		srcs/ft_strchr.c srcs/ft_strrchr.c srcs/ft_strncmp.c srcs/ft_memchr.c \
		srcs/ft_memcmp.c srcs/ft_memmove.c srcs/ft_strlcpy.c srcs/ft_strnstr.c \
		srcs/ft_strlcat.c srcs/ft_strdup.c srcs/ft_calloc.c srcs/ft_atoi.c \
		srcs/ft_substr.c srcs/ft_strjoin.c srcs/ft_strtrim.c srcs/ft_split.c \
		srcs/ft_itoa.c srcs/ft_strmapi.c srcs/ft_striteri.c srcs/ft_putchar_fd.c \
		srcs/ft_putstr_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c


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
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re