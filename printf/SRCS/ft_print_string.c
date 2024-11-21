/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:43:42 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 14:44:15 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/
/*Función para '%s'*/

int	ft_print_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	else if (str[0] == '\0')
		return (0);
	return (ft_putstr(str));
}
/*
int	main(void)
{
	int		ret;
	char	*str;

	str = "Hola mundo";
	printf("Prueba de ft_print_string a través de ft_printf:\n");
	ret = ft_printf("%s", str);
	printf("\nDevuelve: %d (esperado: 10)\n\n", ret);
	return (0);
}*/
