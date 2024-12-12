/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:11:03 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 15:11:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
/*#include <stdio.h>*/

/*ft_strlen calcula la longitud de un string y devuelve el número de caracteres
que tiene el string*/

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	const char	*str;
	size_t		len;

	str = "Hola, mundo!";
	len = ft_strlen(str);
	printf("Longitud de '%s': %zu\n", str, len);
	return (0);
}*/
