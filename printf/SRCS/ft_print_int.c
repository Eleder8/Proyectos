/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:50:16 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/27 12:32:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/

/*Gestiona la conversión del formato para '%d' y '%i'*/

/*"Funcionamiento del codigo:"
-n = va_arg(args, int): Extrae el siguiente argumento de la lista de argumentos
args (en este caso un número entero 'int') y almacena el número en la 'n'.

-len = ft_putnbr(n):  ft_putnbr(n) se encarga de imprimir el número 'n' en la
pantalla (si es negativo imprime '-' antes del número), también devuelve la
cantidad de caracteres que se imprimieron (tiene en cuenta el signo a la hora de 
contar). Almacena el resultado en len

-return: Devuelve la cantidad de caracteres impresos que se han almacenado en 
len.*/

int	ft_print_int(va_list args)
{
	int	n;
	int	len;

	n = va_arg(args, int);
	len = ft_putnbr(n);
	return (len);
}
/*
int	main(void)
{
	int	ret;

	printf("Prueba de ft_print_int a través de ft_printf:\n");
	ret = ft_printf("%d", 12345);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	printf("Prueba de ft_print_int con número negativo por ft_printf:\n");
	ret = ft_printf("%d", -12345);
	printf("\nDevuelve: %d (esperado: 6)\n\n", ret);
	printf("Prueba de ft_print_int con un valor mínimo  por ft_printf:\n");
	ret = ft_printf("%d", -2147483648);
	printf("\nDevuelve: %d (esperado: 11)\n\n", ret);
	return (0);
}*/
