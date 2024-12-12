/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:46:46 by marvin            #+#    #+#             */
/*   Updated: 2024/12/03 14:46:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
/*#include <stdio.h>*/

/*ft_strjoin une(concatena) dos strings en uno, reservando memoria dinámica y
devuelve un puntero al string concatenado o NULL si falla la memoria*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	joined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "Hola, ";
	s2 = "mundo!";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
		printf("Error en ft_strjoin\n");
	return (0);
}*/
