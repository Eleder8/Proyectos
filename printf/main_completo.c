/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_completo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:09:15 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 14:23:36 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len_ft;
	int	len_p;
	int	len;

	len = 42;
	len_ft = ft_printf("Carácter impreso: %c\n", 'A');
	len_p = printf("Carácter impreso: %c\n", 'A');
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("String impreso: %s\n", "Hola mundo");
	len_p = printf("String impreso: %s\n", "Hola mundo");
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Número entero impreso: %d\n", 12345);
	len_p = printf("Número entero impreso: %d\n", 12345);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Número hexadecimal minus: %x\n", 255);
	len_p = printf("Número hexadecimal minus: %x\n", 255);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Número hexadecimal mayus: %X\n", 255);
	len_p = printf("Número hexadecimal mayus: %X\n", 255);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Puntero impreso: %p\n", &len);
	len_p = printf("Puntero impreso: %p\n", &len);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Símbolo de porcentaje impreso: %%\n");
	len_p = printf("Símbolo de porcentaje impreso: %%\n");
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Número sin signo impreso: %u\n", 4294967295U);
	len_p = printf("Número sin signo impreso: %u\n", 4294967295U);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Número negativo impreso: %d\n", -12345);
	len_p = printf("Número negativo impreso: %d\n", -12345);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("String nulo impreso: %s\n", "(null)");
	len_p = printf("String nulo impreso: %s\n", "(null)");
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	len_ft = ft_printf("Puntero nulo impreso: %p\n", NULL);
	len_p = printf("Puntero nulo impreso: %p\n", NULL);
	printf("ft_printf devolvió: %d | printf devolvió: %d\n", len_ft, len_p);
	return (0);
}
