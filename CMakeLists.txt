cmake_minimum_required(VERSION 3.8)
project(libft)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES library.c personal/ft_strlen.c personal/ft_atoi.c personal/ft_isalpha.c personal/ft_isdigit.c personal/ft_isalnum.c personal/ft_isascii.c personal/ft_isprint.c)
add_library(libft ${SOURCE_FILES})