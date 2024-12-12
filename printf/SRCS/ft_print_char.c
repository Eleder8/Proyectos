/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:41:26 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/26 15:43:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/

/*Gestiona la conversión del formato '%c'*/

/*"Funcionamiento del codigo:"
-va_arg(args, int): Extrae el siguiente argumento de la lista args (en este caso,
el carácter 'A') y lo interpreta como un int (su valor ASCII, '65').

-"ft_putchar": se utiliza para imprimir ese carácter en la pantalla.

-"return": devuelve 1, ya que la longitud del carácter impreso es 1.*/

int	ft_print_char(va_list args)
{
	return (ft_putchar(va_arg(args, int)));
}
/*
int	main(void)
{
	int	ret;

	printf("Prueba de ft_print_char a través de ft_printf:\n");
	ret = ft_printf("%c", 'A');
	printf("\nDevuelve: %d (esperado: 1)\n\n", ret);
	return (0);
}*/
