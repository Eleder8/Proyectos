/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:53:27 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/17 22:01:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <stdarg.h>
/*Función para '%u'*/

int	ft_print_unsigned(va_list args)
{
	return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
}
