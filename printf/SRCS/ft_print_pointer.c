/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:47:09 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/21 13:37:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/
/*Función para '%p'*/

int	ft_print_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putpointer((unsigned long long)ptr));
}
/*
int	main(void)
{
	int	ret;
	void	*ptr;

	ptr = (void*)123456;
	printf("Prueba de ft_print_pointer (puntero no nulo):\n");
	ret = ft_printf("%p", ptr);
	printf("\nDevuelve: %d (esperado: 7)\n\n", ret);
	ptr = NULL;
	printf("Prueba de ft_print_pointer (puntero nulo):\n");
	ret = ft_printf("%p", ptr);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	return (0);
}*/
