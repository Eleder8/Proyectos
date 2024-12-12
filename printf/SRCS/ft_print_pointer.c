/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:47:09 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/26 15:43:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/

/*Gestiona la conversión para '%p'*/

/*Funcionamiento del codigo:
-va_arg(args, void*): Extrae el argumento de la lista args, que es un puntero
'void*'. El tipo 'void*' puede apuntar a cualquier tipo de dato, pero necesitamos
tratarlo como un valor numérico para imprimir su dirección de memoria.

-Si el puntero es nulo, ft_putstr imprime "(nil)" en pantalla (no apunta a 
ninguna dirección válida).

-Si el puntero no es nulo, se convierte a "unsigned long long". Esto es necesario
porque las direcciones de memoria pueden ser números grandes (especialmente en
sistemas de 64 bits). Después la dirección de memoria convertida se imprime en
formato hexadecimal, precedida de '0x', utilizando ft_putpointer.

-return: Devuelve la cantidad de caracteres impresos por ft_putpointer o
ft_putstr, dependiendo del caso para saber la longitud del valor impreso.*/

int	ft_print_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putpointer((unsigned long long)ptr));
}
/*
int	main(void)
{
	int	ret;
	void	*ptr;

	ptr = (void*)123456;
	printf("Prueba de ft_print_pointer (puntero no nulo):\n");
	ret = ft_printf("%p", ptr);
	printf("\nDevuelve: %d (esperado: 7)\n\n", ret);
	ptr = NULL;
	printf("Prueba de ft_print_pointer (puntero nulo):\n");
	ret = ft_printf("%p", ptr);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	return (0);
}*/
