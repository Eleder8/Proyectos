/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:34:46 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/13 09:30:40 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // Para manejar arguemntos variables
# include <unistd.h> // Para la funcion write
# include "libft/libft.h"

/*Prototipo de ft_printf*/
int	ft_printf(const char *format, ...);

/*Prototipo de la función auxiliar para manejar conversiones*/
int	ft_handle_conversion(char c, va_list args);

/*Prototipos de funciones auxiliares*/
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr_hex(unsigned int n, char format);
int	ft_putpointer(unsigned long long ptr);
int	ft_print_hex_upper(unsigned int n);
int	ft_print_percent(void);

#endif
