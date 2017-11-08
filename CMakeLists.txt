cmake_minimum_required(VERSION 3.8)
project(Libft)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        personal/ft_atoi.c
        personal/ft_isalnum.c
        personal/ft_isalpha.c
        personal/ft_isascii.c
        personal/ft_isdigit.c
        personal/ft_isprint.c
        personal/ft_strlen.c
        auteur
        ft_atoi.c
        ft_bzero.c
        ft_isalnum.c
        ft_isalpha.c
        ft_isascii.c
        ft_isdigit.c
        ft_isprint.c
        ft_itoa.c
        ft_memalloc.c
        ft_memccpy.c
        ft_memchr.c
        ft_memcmp.c
        ft_memcpy.c
        ft_memdel.c
        ft_memmove.c
        ft_memset.c
        ft_putchar.c
        ft_putchar_fd.c
        ft_putendl.c
        ft_putendl_fd.c
        ft_putnbr.c
        ft_putnbr_fd.c
        ft_putstr.c
        ft_putstr_fd.c
        ft_strcat.c
        ft_strchr.c
        ft_strclr.c
        ft_strcmp.c
        ft_strcpy.c
        ft_strdel.c
        ft_strdup.c
        ft_striter.c
        ft_striteri.c
        ft_strlcat.c
        ft_strlen.c
        ft_strncat.c
        ft_strncmp.c
        ft_strncpy.c
        ft_strnstr.c
        ft_strrchr.c
        ft_strstr.c
        ft_tolower.c
        ft_toupper.c
        libft.h)

add_executable(Libft ${SOURCE_FILES})