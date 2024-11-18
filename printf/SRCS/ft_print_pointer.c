/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:47:09 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 14:38:50 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

/*Función para '%p'*/

int	ft_print_pointer(va_list args)
{
	unsigned long long	ptr;
	int			count;

	ptr = va_arg(args, unsigned long long);
	count = ft_putpointer(ptr);
	return (count);
}
