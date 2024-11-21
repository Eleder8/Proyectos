/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:02:19 by eloizaga          #+#    #+#             */
/*   Updated: 2024/11/18 14:02:16 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
/*#include <stdio.h>*/

/*-"ft_putnbr" recibe un número entero ('int') 'n' y lo imprime en la pantalla
carácter por carácter. Devuelve la cantidad total de caracteres impresos,
sumando los caracteres individuales impresos por "ft_putchar".*/

/*-Funcionamiento del codigo:
-"ft_putnbr" recibe un número entero 'n'.
-Se crea una variable "count" para contar la cantidad de caracteres impresos
en pantalla.

-"Caso especial if n == -2147483648": Este es el menor valor que puede tener
un 'int'(no se puede covertir a positivo sin causar error).
-Si 'n' es igual a este valor, se usa "ft_putstr" para imprimirlo directamente
y devolver el número de caracteres impresos por "ft_putstr("-2147483648")"
que serian '11'.

-"Caso negativo (if n < 0)": si 'n' es negativo se usa "ft_putchar" para
imprimir el caracter '-'.
-"count" se incrementa en 1 porque "ft_putchar" imprime 1 solo carácter.
-Convierte 'n' a positivo (n = -n) para poder trabajar con el número sin
su signo negativo.

-"Caso recursivo (if n >= 10)": si 'n' es mayor o igual a 10
-"count += ft_putnbr(n / 10)" divide 'n' entre 10 para eliminar el ultimo
digito y llama recursivamente a "ft_putnbr para imprimir el resto del número.
-El valor de "count" se incrementa cada vez que un dígito se imprime
recursivamente.
-"Caso base": Cuando el número 'n' es menor que 10 (un solo dígito),
"count += ft_putchar((n % 10) + '0'" convierte ese ultimo digito de 'n' en su
caracter ASCII y lo imprime.(Ejemplo: Si n % 10 es 3, (3 + 0) será '3')
-"count += ft_putchar" Aumenta el valor de "count" en 1 por cada dígito
impreso por "ft_putchar"

-"return (count)" devuelve el valor de "count" que contendrá el número total de 
caracteres impresos en pantalla (incluyendo el signo '-' si era negativo)*/

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
/*
int	main(void)
{
	int	ret;

	printf("Prueba de ft_putnbr:\n");
	ret = ft_putnbr(12345);
	printf("\nDevuelve: %d (esperado: 5)\n\n", ret);
	ret = ft_putnbr(-42);
	printf("\nDevuelve: %d (esperado: 3)\n\n", ret);
	ret = ft_putnbr(0);
	printf("\nDevuelve: %d (esperado: 1)\n\n", ret);
	ret = ft_putnbr(-2147483648);
	printf("\nDevuelve: %d (esperado: 11)\n\n", ret);
	return (0);
}*/
