/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:38:13 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 13:36:47 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/
/*-ft_putstr recibe un string de caracteres 'str' y lo imprime en la pantalla
carácter por carácter usando ft_putchar. Devuelve los caracteres impresos.*/

/*Funcionamineto del codigo:
-"ft_putstr" recibe un puntero 'str' de tipo 'char'(String de caracteres).
-"count" es un 'contador' para saber la cantidad de caracteres impresos.

-"Caso if" si 'str' es NULL(string vacio), se le asigna el string "(null)" a
'str'.

-"Bucle while" se ejecuta mientras se recorre '*str' y no se llegue a '\0' que
indica el fin del string.
-"ft_putchar(*str)" imprime el caracter actual y suma 1 a "count" para contar
los caracteres imppresos.
-"str++" avanza el puntero 'str' al siguiente carácter del string

-"return" devuelve "count" que representa el total de caracteres impresos
en pantalla*/

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
/*
int	main(void)
{
	int		ret;
	char	*str;

	str = "Hola Mundo";
	printf("Prueba de ft_putstr:\n");
	ret = ft_putstr(str);
	printf("\nDevuelve: %d (esperado: 10)\n\n", ret);
	str = NULL;
	printf("Prueba de ft_putstr con NULL:\n");
	ret = ft_putstr(str);
	printf("\nDevuelve: %d (esperando: 6)\n\n", ret);
	return (0);
}*/
