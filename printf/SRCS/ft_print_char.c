/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:41:26 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/14 11:19:54 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

/*Función para '%c'*/

int     print_char(va_list args)
{
        return (ft_putchar(va_arg(args, int)));
}

