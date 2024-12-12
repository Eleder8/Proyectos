/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:43:42 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/27 12:32:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/

/*Gestiona la conversión para '%s' */

/*Funcionamiento del código:
-va_arg(args, char*): Extrae el siguiente argumento de la lista args, que es un
"string".

-Si el string es NULL, ft_putstr imprime "(null)" en pantalla.

-Si el string esta vacío, pero no es nulo (tiene el primer carácter '\0'), la
función devuelve 0 (no imprime nada).

-Si el string no es NULL ni esta vacío, ft_putstr imprime el string caracter a
caracter hasta llegar a '\0' que indica el final.

-return: Devuelve la cantidad de caracteres impresos por ft_putstr para saber
la longitud del "string" (Si es NULL devolverá 6 porque imprime "(null)").
*/

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
