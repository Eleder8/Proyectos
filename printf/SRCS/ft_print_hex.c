/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:55:52 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/17 21:59:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/
/*Función para '%x' y '%X'*/

int	ft_print_hex(va_list args, char format)
{
	return (ft_putnbr_hex(va_arg(args, unsigned int), format));
}
/*
int	main(void)
{
	int	ret;

	printf("Prueba de ft_print_hex (minúsculas):\n");
	ret = ft_printf("%x", 255);
	printf("\nDevuelve: %d (esperado: 2)\n\n", ret);
	printf("Prueba de ft_print_hex (mayúsculas):\n");
	ret = ft_printf("%X", 255);
	printf("\nDevuelve: %d (esperado: 2)\n\n", ret);
	printf("Prueba de ft_print_hex con número grande (minúsculas):\n");
	ret = ft_printf("%x", 4294967295);
	printf("\nDevuelve: %d (esperado: 8)\n\n", ret);
	printf("Prueba de ft_print_hex con número grande (mayúsculas):\n");
	ret = ft_printf("%X", 4294967295);
	printf("\nDevuelve: %d (esperado: 8)\n\n", ret);
	return (0);
}*/
