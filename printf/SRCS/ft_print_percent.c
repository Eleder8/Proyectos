/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:58:40 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 14:08:50 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
/*#include <stdio.h>*/

/*Función para '%%'*/

int	ft_print_percent(void)
{
	ft_putchar('%');
	return (1);
}
/*
int	main(void)
{
	int	ret;

	printf("Prueba de ft_print_percent a través de ft_printf:\n");
	ret = ft_printf("%%");
	printf("\nDevuelve: %d (esperado: 1)\n\n", ret);
	return (0);
}*/
