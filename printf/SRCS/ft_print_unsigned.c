/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:53:27 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/21 13:28:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/

/* Función para '%u' */

int	ft_print_unsigned(va_list args)
{
	return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
}
/*
int	main(void)
{
	unsigned int	num;
	int				ret;

	num = 12345;
	printf("Prueba de ft_print_unsigned a través de ft_printf:\n");
	ret = ft_printf("%u", num);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	printf("Prueba de ft_print_unsigned (número grande) por ft_printf:\n");
	num = 4294967295U;
	ret = ft_printf("%u", num);
	printf("\nDevuelve: %d (esperado: 10)\n\n", ret);
	return (0);
}*/
