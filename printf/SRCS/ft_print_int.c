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

/*Función para '%d' y '%i'*/

int	ft_print_int(va_list args)
{
	int	n;
	int	len;

	n = va_arg(args, int);
	len = ft_putnbr(n);
	return (len);
}
