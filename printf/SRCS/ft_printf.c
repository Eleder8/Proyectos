/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:15:10 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/12 09:37:34 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/*-"ft_printf" imprime texto en la pantalla recorriendo el string apuntado
por "format"
Cuando encuentra "%" (especificador de formato), realiza una conversión,
como convertir un número (%d), un string (%s), etc

-Si encuentra un '%' (especificador de formato) llama a "ft_handle_conversion"
para procesar y convertir el tipo de dato correspondiente ('int', 'string', etc)

-Si es un carácter normal (que no sea "%") imprime el carácter directamente
en la pantalla usando "write"

-Al final, devuelve el número total de caracteres impresos*/

int	ft_handle_conversion(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_print_char(va_arg(args, int));
	else if (c == 's')
		len = ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		len = ft_print_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		len = ft_print_decimal(va_arg(args, int));
	else if (c == 'u')
		len = ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		len = ft_print_hex_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		len = ft_print_hex_upper(va_arg(args, unsigned int));
	else if (c == '%')
		len = ft_print_percent();
	else
	{
		write(1, "Especificador de formato no válido\n", 37);
		return (0);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_len;
	int		len;

	total_len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len = ft_handle_conversion(*format, args);
			total_len += len;
		}
		else
		{
			write(1, format, 1);
			total_len++;
		}
		format++;
	}
	va_end(args);
	return (total_len);
}
/*
int	main(void)
{
	int	len;

	len = ft_printf("Hola, %s! Numero: %d\n", "Mundo", 42);
	ft_printf("Caracteres impresos: %d\n", len);
	return (0);
}*/
/*-Ejemplo:
ft_printf("Hola, %d",42);
la función recorre "Hola, %d", imprime "Hola, ", al encontrar '%' seguido de 'd'
llama a "ft_handle_conversion" que convierte el %d en '42' y lo imprime.
Al final, la función devolverá 7 (porque "Hola 42" tiene 7 caracteres)*/
