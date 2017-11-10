# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 12:17:53 by ebertin           #+#    #+#              #
#    Updated: 2017/11/10 18:39:07 by ebertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_putchar.c ft_strcmp.c ft_isdigit.c ft_isprint.c \
 ft_strlen.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
 ft_memcpy.c ft_memccpy.c ft_memccpy.c ft_memset.c \
 ft_putchar_fd.c ft_putendl.c ft_putnbr.c ft_putendl_fd.c \
 ft_putnbr_fd.c ft_putstr_fd.c ft_putstr.c ft_strchr.c ft_strcmp.c \
 ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_strncpy.c ft_strnstr.c \
 ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_strnew.c ft_itoa.c \
 ft_isnegativ.c ft_memmove.c
FLAGS = -Wall -Wextra -Werror -c
HEADERS = libft.h
OBJ = ft_putchar.o ft_strcmp.o ft_isdigit.o ft_isprint.o \
 ft_strlen.o ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
 ft_memcpy.o ft_memccpy.o ft_memccpy.o ft_memset.o \
 ft_putchar_fd.o ft_putendl.o ft_putnbr.o ft_putendl_fd.o \
 ft_putnbr_fd.o ft_putstr_fd.o ft_putstr.o ft_strchr.o ft_strcmp.o \
 ft_strcpy.o ft_strdup.o ft_strlen.o ft_strncmp.o ft_strncpy.o ft_strnstr.o \
 ft_strrchr.o ft_strstr.o ft_tolower.o ft_toupper.o ft_strnew.o ft_itoa.o \
 ft_isnegativ.o ft_memmove.o

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
