/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:15:10 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/27 20:02:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>
#include "../libft/libft.h"

/*-"ft_printf" recorre cada caracter del texto 'format' y si encuentra un
especificador de formato llama a ft_handle_conversion para convertir el
arguemento y si no lo encuentra imprime el carácter ta cual está.*/

/*Funcionamiento del codigo:
-va_list args: Es una variable para acceder a la lista de argumentos
que se pasan a 'ft_printf'
-int printed_chars: variable para saber el numero total de caracteres impresos.
Se incia en 0.

-va_start(args, format); Inicializa la lista de argumentos 'args', para empezar
a procesar los valores pasados a la función después de 'format'.

-while (*format): Recorre cada carácter del string 'format' hasta encontrar '\0'

-if (format == '%'): Si encuentra el caracter '%' llama a "ft_handle_conversion"
para especificar que formato es, imprime el caracter y suma 1 al contador
(cada vez que imprime y guarda 1 caracter avanza al siguiente por eso se pone
'format++')

-else: Si el caracter no es '%', lo imprime tal cual usando ft_putchar y suma 1
al contador (cada vez que imprime y guarda 1 caracter avanza al siguiente por
eso se pone 'format++')

-va_end(args); Finaliza el uso de la lista de argumentos 'args'

return (printed_chars); Devuelve el total de caracteres impresos
*/

int	ft_handle_conversion(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(args));
	else if (format == 's')
		return (ft_print_string(args));
	else if (format == 'p')
		return (ft_print_pointer(args));
	else if (format == 'i' || format == 'd')
		return (ft_print_int(args));
	else if (format == 'u')
		return (ft_print_unsigned(args));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(args, format));
	else if (format == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;

	printed_chars = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printed_chars += ft_handle_conversion(*format, args);
		}
		else
			printed_chars += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (printed_chars);
}
