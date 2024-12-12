/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:22:55 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 14:04:28 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/

/*"ft_putnbr_hex": Imprime números en formato hexadecimal (%x o %X) y devolverá
el número total de caracteres impresos.*/

/*Funcionamiento del codigo:
-"ft_putnbr_hex" recibe un número sin signo 'n' y un carácter 'format' que indica
si el formato debe ser minúsculas('x') o mayúsculas('X').

-"count" se crea para contar el número total de caracteres impresos en pantalla.
-"*base" es un puntero a un string que contiene los caracteres hexadecimales.

-"Caso if (format == 'x')": Si 'format' es 'x', "base" se establece en 
"0123456789abcdef", esto significa que el número se imprimirá en minúsculas.
-"Caso else": Si 'format' es 'X', "base" se establece en "0123456789abcdef",
esto significa que el número se imprimirá en mayúsculas.

-"Caso recursivo if (n >= 16)": Si el número 'n' es 16 o mayor,
"count += ft_putnbr_hex(n / 16, format)" divide 'n' entre 16 y llama a
"ft_putnbr_hex" recursivamente para procesar los dígitos (format indica si es
'x' o 'X').
"count += ft_putchar(base[n % 16])": Cuando 'n' es menor de 16 o se han
procesado los dígitos, se imprime el dígito hexadecimal correspondiente al
valor de "n % 16" (selecciona el carácter del string "base"). "count"
se incrementa en 1 por cada carácter que ha imprimido ft_putchar.

(Ejemplo: ft_putnbr_hex(254, 'x') -> ft_putnbr_hex(254 / 16, 'x') ->
ft_putnbr_hex(15, 'x'). Como 15 < 16, se imprime 'f'(15 en hexadecimal).
Al regresar a la primera llamada (ft_putnbr_hex(254, 'x')) usamos
"n % 16", que seria "245 % 16" y daría 14, se imprime 'e'(14 en hexadecimal).
Por lo que primero se imprimirá 'f' y después 'e'('fe')

-"return (count)": Devuelve "count" que contiene el total de caracteres
impresos en pantalla*/

int	ft_putnbr_hex(unsigned int n, char format)
{
	char	*base;
	int		count;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_putnbr_hex(n / 16, format);
	count += ft_putchar(base[n % 16]);
	return (count);
}
/*
int	main(void)
{
	int	ret;

	printf("Prueba de ft_putnbr_hex (minúsculas):\n");
	ret = ft_putnbr_hex(255, 'x');
	printf("\nDevuelve: %d (esperado: 2)\n\n", ret);
	printf("Prueba de ft_putnbr_hex (mayúsculas):\n");
	ret = ft_putnbr_hex(255, 'X');
	printf("\nDevuelve: %d (esperado: 2)\n\n", ret);
	printf("Prueba de ft_putnbr_hex (minúscula cero):\n");
	ret = ft_putnbr_hex(0, 'x');
	printf("\nDevuelve: %d (esperado: 1)\n\n", ret);
	printf("Prueba de ft_putnbr_hex (mayúscula cero):\n");
	ret = ft_putnbr_hex(0, 'X');
	printf("\nDevuelve: %d (esperado: 1)\n\n", ret);
	return (0);
}*/
