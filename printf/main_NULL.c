/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_NULL.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:00:00 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/13 10:30:00 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		ft_ret;
	int		std_ret;
	char	*null_str;
	void	*null_ptr;

	null_str = NULL;
	null_ptr = NULL;
	ft_ret = ft_printf("String vacío: %s\n", "");
	std_ret = printf("String vacío: %s\n", "");
	printf("Retornos: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("String NULL: %s\n", null_str);
	std_ret = printf("String NULL: %s\n", null_str);
	printf("Retornos: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("Entero máximo: %d\n", 2147483647);
	std_ret = printf("Entero máximo: %d\n", 2147483647);
	printf("Retornos: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);
	ft_ret = ft_printf("Puntero NULL: %p\n", null_ptr);
	std_ret = printf("Puntero NULL: %p\n", null_ptr);
	printf("Retornos: ft_printf = %d, printf = %d\n\n", ft_ret, std_ret);
	return (0);
}
