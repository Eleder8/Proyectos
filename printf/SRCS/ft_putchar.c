/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:31:58 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/13 10:00:00 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*-ft_putchar toma un carácter 'c' y lo imprime en la pantalla(salida estandar)
con write.

-Devuelve 1 porque imprime un carácter, lo cual ayuda a "ft_printf" a contar
el número de caracteres impresos.*/

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
