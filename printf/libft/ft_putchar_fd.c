/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:11:28 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 12:07:31 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Se usa para escribir un solo caracter 'c' en un descriptor de archivo "fd"*/
/*Es útil para enviar caracteres a diferentes salidas dependiendo de "fd"*/

int	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = 'A';
	ft_putchar_fd(c, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
