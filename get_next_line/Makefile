# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 16:14:02 by marvin            #+#    #+#              #
#    Updated: 2024/12/02 16:14:08 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable
NAME = get_next_line.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42

# Archivos fuente y objetos
SRCS = get_next_line.c ft_strchr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

# Regla para compilar la librería
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Limpiar archivos objeto
clean:
	rm -f $(OBJS)

# Limpiar todo (objetos + librería)
fclean: clean
	rm -f $(NAME)

# Regla para reconstruir el proyecto desde cero
re: fclean all

#Indica que las reglas no son archivos
.PHONY: all clean fclean re
