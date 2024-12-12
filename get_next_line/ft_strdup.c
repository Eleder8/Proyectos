/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:39:14 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 13:39:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
/*#include <stdio.h>*/

/*ft_strdup crea una copia (duplica) de un string, reservando memoria dinámica y
devuelve un puntero a una copia del string (Si falla devuelve NULL)*/

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*src;
	char	*dup;

	src = "Hola, mundo!";
	dup = ft_strdup(src);
	if (dup)
	{
		printf("Original: %s\n", src);
		printf("Duplicado: %s\n", dup);
	}
	else
		printf("Error al duplicar el string.\n");
	free(dup);
	return (0);
}*/
