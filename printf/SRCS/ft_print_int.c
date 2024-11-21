/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:50:16 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 14:41:05 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/
/*Función para '%d' y '%i'*/

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
