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
/*Función para '%x' y '%X'*/

int	ft_print_hex(va_list args, char format)
{
	return (ft_putnbr_hex(va_arg(args, unsigned int), format));
}
