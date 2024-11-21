/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:41:26 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/14 11:19:54 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/

/*Gestiona la conversión del formato '%c'*/
/*"ft_print_char" imprime un carácter y devuelve el número de caracteres que
 ha impreso*/

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
