/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:55:52 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/14 11:32:02 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

/*Función para '%x' y '%X'*/

int	 print_hex(va_list args, char format)
{
	return (ft_putnbr_hex(va_arg(args, unsigned int), format));
}
