# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 11:50:31 by eloizaga          #+#    #+#              #
#    Updated: 2024/11/11 20:49:14 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de salida
NAME = libftprintf.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos de ft_printf
SRCS = SRCS/ft_print_char.c SRCS/ft_print_decimal.c \
       SRCS/ft_printf.c SRCS/ft_print_hex_lower.c SRCS/ft_print_hex_upper.c \
       SRCS/ft_print_percent.c SRCS/ft_print_pointer.c SRCS/ft_print_string.c \
       SRCS/ft_print_unsigned.c
OBJS = $(SRCS:.c=.o)

#Ruta de libft
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

#Reglas principales
all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(LIBFT) $(OBJS)

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all
