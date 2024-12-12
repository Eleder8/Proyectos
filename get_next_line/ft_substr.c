/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:39:29 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 13:39:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
/*#include <stdio.h>*/

/*ft_substr extrae un substring de un string, a partir de una posición incial
(start) y con una longitud maxima (len). Devuelve un puntero al substring 
extraido (Si start está fuera de rango o hay un fallo en la memoria devuelve
NULL)*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	str_len;
	size_t	i;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	*str;
	char	*substr;

	str = "Hola, mundo!";
	substr = ft_substr(str, 7, 5);
	if (substr)
	{
		printf("Original: %s\n", str);
		printf("Subcadena: %s\n", substr);
	}
	else
		printf("Error al crear el substring.\n");
	free(substr);
	return (0);
}*/
