/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:49:34 by marvin            #+#    #+#             */
/*   Updated: 2024/12/02 15:49:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
/*#include <stdio.h>*/

/*-ft_strchr: Busca la primera apareción de un carácter 'c' en un string y 
devuelve un puntero al carácter encontrado en el string (Si busca '\0' devuelve
el puntero al final del string y si no encuentra el caracter devuelve NULL)*/

/*-Funcionamiento del codigo:
 *
Bucle while: Recorre el string 's' buscando el carácter 'c'.

-if: Si encuentra el carácter 'c' , devuelve un puntero (direccón de memoria)
en esa posición del string.

-if: Si 'c' es '\0', devuelve un puntero a la posición de '\0' que indica el
final del string.

-Si no se encuentra el carácter 'c' en el string, devuelve NULL*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char	str[12];
	char	*result;

	str[0] = 'H';
	str[1] = 'o';
	str[2] = 'l';
	str[3] = 'a';
	str[4] = '\n';
	str[5] = 'M';
	str[6] = 'u';
	str[7] = 'n';
	str[8] = 'd';
	str[9] = 'o';
	str[10] = '\0';
	result = ft_strchr(str, '\n');
	printf("Resultado al buscar '\\n': %s\n", result);
	result = ft_strchr(str, 'H');
	printf("Resultado al buscar 'H': %s\n", result);
	result = ft_strchr(str, '?');
	printf("Resultado al buscar '?': %s\n", result);
	return (0);
}*/
