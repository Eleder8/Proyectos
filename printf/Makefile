# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 11:50:31 by eloizaga          #+#    #+#              #
#    Updated: 2024/11/18 11:13:05 by eloizaga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de salida
NAME = libftprintf.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos de ft_printf
SRCS = SRCS/ft_printf.c SRCS/ft_print_char.c SRCS/ft_print_string.c \
       SRCS/ft_print_pointer.c SRCS/ft_print_int.c SRCS/ft_print_unsigned.c \
       SRCS/ft_print_hex.c SRCS/ft_print_percent.c SRCS/ft_putchar.c \
       SRCS/ft_putstr.c SRCS/ft_putnbr.c SRCS/ft_putnbr_unsigned.c \
       SRCS/ft_putnbr_hex.c SRCS/ft_putpointer.c

OBJS = $(SRCS:.c=.o)

# Ruta de libft
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# Reglas principal
all: $(NAME)

# Compila la biblioteca libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Regla para crear la librería estática libftprintf.a
$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

# Elimina los archivos objeto
clean:
	rm -f $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

# Elimina los archivos objeto y la librería estática
fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)
# Vuelve a compilar todo
re: fclean all

.PHONY: all clean fclean re
