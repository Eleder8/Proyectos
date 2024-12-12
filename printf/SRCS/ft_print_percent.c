/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:58:40 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/25 13:59:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
/*#include <stdio.h>*/

/*Gestiona la conversión para '%%'*/

/*"Funcionamiento del codigo:"
-"ft_putchar('%')": Imprime el carácter '%' en la pantalla.

-"return": Devuelve 1, ya que imprime el carácter '%' (simbolo de porcentaje).*/

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
