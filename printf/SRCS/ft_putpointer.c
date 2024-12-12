/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:43:23 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/27 15:44:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/

/*Imprime un dirección de memoria en formato hexadecimal (puntero) y devuelve
el número total de caracteres impresos en pantalla.*/

/*-"ft_putpointer" recibe un puntero 'ptr' de tipo 'unsigned long long'(puede
almacenar números grandes de hasta 64 bits sin signo (solo positivos)).
-La variable "count" cuenta el número total de caracteres impresos en pantalla.

-Caso if: Si 'ptr' es NULL llama a la función "ft_putstr" para imprimir "(nil)"
que es el formato estándar para punteros nulos en "printf".
Devuelve el número de caracteres impresos por ft_putstr("(nil)") que sería 5.

-Prefijo "0x": Si 'ptr' no es NULL llama a la función "ft_putstr" para imprimir
"0x" antes de la dirección hexadecimal (esto vale para indicar que es un
número en hexadecimal).
Con esto "count" incrementa su valor en 2 ("0x" tiene 2 caracteres)

-Dirección en hexadecimal: Después del prefijo "0x", se llama a
"ft_putnbr_hex(ptr, 'x')" para imprimir el valor de 'ptr' en hexadecimal con
letras minúsculas ('x').
Con esto "count" incrementa su valor con la cantidad de caracteres impresos.

-Retorno: Devuelve el valor de "count" que contiene el número total de 
caracteres impresos en pantalla ("0x" y los caracteres de 'ptr').*/

int	ft_putpointer(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(nil)");
	}
	else
	{
		count += ft_putstr("0x");
		count += ft_putnbr_hex(ptr, 'x');
	}
	return (count);
}
/*
int	main(void)
{
	int	ret;
	void	*ptr;

	printf("Prueba de ft_putpointer (puntero no nulo):\n");
	ptr = (void*)123456;
	ret = ft_putpointer((unsigned long long)ptr);
	printf("\nDevuelve: %d (esperado: 7)\n\n", ret);
	printf("Prueba de ft_putpointer (puntero nulo):\n");
	ptr = NULL;
	ret = ft_putpointer((unsigned long long)ptr);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	return (0);
}*/
