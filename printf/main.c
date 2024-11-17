/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:00:00 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/17 18:14:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret;

	printf("Prueba de ft_print_char:\n");
	ret = ft_putchar('A');
	printf("\nDevuelve: %d (esperado: 1)\n\n", ret);
	printf("Prueba de ft_print_string:\n");
	ret = ft_putstr("Hola Mundo");
	printf("\nDevuelve: %d (esperado: 10)\n\n", ret);
	printf("Prueba de ft_print_pointer:\n");
	ret = ft_putpointer(123456);
	printf("\nDevuelve: %d (esperado: 7)\n\n", ret);
	printf("Prueba de ft_print_int:\n");
	ret = ft_putnbr(-42);
	printf("\nDevuelve: %d (esperado: 3)\n\n", ret);
	printf("Prueba de ft_print_unsigned:\n");
	ret = ft_putnbr_unsigned(12345);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	printf("Prueba de ft_print_hex (minúsculas):\n");
	ret = ft_putnbr_hex(255, 'x');
	printf("\nDevuelve: %d (esperado: 2)\n\n", ret);
	printf("Prueba de ft_print_hex (mayúsculas):\n");
	ret = ft_putnbr_hex(255, 'X');
	printf("\nDevuelve: %d (esperado: 2)\n\n", ret);
	return (0);
}
