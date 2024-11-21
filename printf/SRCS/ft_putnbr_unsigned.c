/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:24:25 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/13 12:20:08 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/

/*"ft_putnbr_unsigned" recibe un número entero sin signo  'n', lo imprime en
pantalla y devuelve el número total de caracteres impresos.*/

/*Funcionamiento del codigo:
-"ft_putnbr_unsigned" recibe un número entero sin signo 'n' y crea una variable
llamada "count" para contar los caracteres impresos.

-"Caso recursivo (if (n >= 10)): Si se cumple divide 'n' entre 10 para quitar
el último dígito, usa recursividad, lo que permite separar los dígitos 1 por 1.
"count += ft_putnbr_unsigned(n / 10)" almacena en "count" el número total de
caracteres impresos por las llamadas recursivas.

-"Caso base (count += ft_putchar((n % 10) + '0'))": Cuando 'n' es menor que 10
o se alcanza el último dígito por la recursividad anterior:
"(n % 10) + '0'" toma el último digito de 'n' y lo convierte a su carácter
ASCII sumandole '0'.
Imprime el carácter con "ft_putchar" e incrementa "count" en 1.

-"return (count)": Devuelve "count", que contiene el total de caracteres 
impresos.*/

int	ft_putnbr_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
/*
int	main(void)
{
	int	ret;

	printf("Prueba de ft_putnbr_unsigned:\n");
	ret = ft_putnbr_unsigned(12345);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	printf("Prueba de ft_putnbr_unsigned (cero):\n");
	ret = ft_putnbr_unsigned(0);
	printf("\nDevuelve: %d (esperado: 1)\n\n", ret);
	printf("Prueba de ft_putnbr_unsigned (máximo valor):\n");
	ret = ft_putnbr_unsigned(4294967295);
	printf("\nDevuelve: %d (esperado: 10)\n\n", ret);
	return (0);
}*/
