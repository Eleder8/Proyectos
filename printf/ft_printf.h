/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:34:46 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 10:46:49 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/*Funciones de impresión*/
int	ft_printf(const char *format, ...);
int	ft_handle_conversion(char format, va_list args);

/*Funciones auxiliares para impresión*/
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr_hex(unsigned int n, char format);
int	ft_putpointer(unsigned long long ptr);

/*Funciones de conversión de ft_printf*/
int	ft_print_char(va_list args);
int	ft_print_string(va_list args);
int	ft_print_pointer(va_list args);
int	ft_print_int(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_hex(va_list args, char format);
int	ft_print_percent(void);

#endif
