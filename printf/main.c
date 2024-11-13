/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:56:42 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 09:05:55 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	len;

	len = ft_printf("Carácter impreso: %c\n", 'A');
	ft_printf("ft_printf devolvió: %d\n", len);
	len = ft_printf("String impreso: %s\n", "Hola, Mundo");
	ft_printf("ft_printf devolvió: %d\n", len);
	len = ft_printf("Número entero impreso: %d\n", 12345);
	ft_printf("ft_printf devolvió: %d\n", len);
	len = ft_printf("Número hexadecimal minus: %x\n", 255);
	ft_printf("ft_printf devolvió: %d\n", len);
	len = ft_printf("Número hexadecimal mayus: %X\n", 255);
	ft_printf("ft_printf devolvió: %d\n", len);
	len = ft_printf("Puntero impreso: %p\n", &len);
	ft_printf("ft_printf devolvió: %d\n", len);
	len = ft_printf("Símbolo de porcentaje impreso: %%\n");
	ft_printf("ft_printf devolvió: %d\n", len);
	return (0);
}
