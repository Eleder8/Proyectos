/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:15:10 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/14 14:16:06 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>

/*-"ft_printf" imprime texto en la pantalla recorriendo el string de formato
"format". Cuando encuentra "%" (especificador de formato), llama a la función
"ft_handle_conversion" para realizar la conversión y sustituir el especificador
por el valor correspondiente en los argumentos.
-Al final,cuenta y devuelve el número total de caracteres impresos.*/

/*-"ft_printf" recibe un string de formato "(const char *format)" y una lista
variable de argumentos "...".

-va_start(args, format): Inicializa la lista de argumentos 'args' para poder
comenzar a leer los argumentos que se pasan después de "format".
-"printed_chars" cuenta la cantidad total de caracteres impresos.

-"va_start(args, format)": "va_start" permite que 'args' acceda a los
argumentos que vienen después de "format".
(Ejemplo: ft_printf("Hello %s, you are %d", "Alice", 30): "format" es el string
"Hello %s, you are %d" y los argumentos que vienen después son "Alice" y 30)

-Bucle while: Se recorre cada carácter del string "format":

Caso if: Si al recorrer "format" encuentra el carácter '%', se incrementa
"format" para obtener el sigiente carácter que es el tipo de especificador (c,
s, p, etc).
Llama a "ft_handle_conversion(*format, args)" que procesa el especificador y
devuelve la cantidad de caracteres impresos para almacenarlos en "printed_chars"

Caso else: Si al recorrer "format" el carácter no es '%', lo imprime usando
ft_putchar(*format), incrementado "printed_chars" en 1

-"va_end(args)": Finaliza el uso de la lista de argumentos 'args' despueś de
haber terminado de procesarlos.

-Retorno: Devuelve el total de caracteres impresos por "ft_printf" almacenandolo
en "printed_chars"
*/

int	ft_handle_conversion(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(args));
	else if (format ==  's')
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
	int	printed_chars

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
