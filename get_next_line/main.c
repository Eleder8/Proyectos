/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:31:02 by marvin            #+#    #+#             */
/*   Updated: 2024/12/11 11:31:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h> // Para open
#include <stdio.h> // Para printf
#include "get_next_line.h" // Tu cabecera

void test_file(const char *file_path)
{
    int     fd;
    char    *line;

    printf("Leyendo archivo: %s\n", file_path);

    fd = open(file_path, O_RDONLY);
    if (fd < 0)
    {
        perror("Error al abrir el archivo");
        return;
    }

    line = get_next_line(fd);
    if (!line)
        printf("NULL (archivo vacío o error de lectura)\n");
    while (line)
    {
        printf("Línea leída: %s", line);
        free(line);
        line = get_next_line(fd);
    }
    close(fd);
    printf("Fin de lectura\n\n");
}

void test_invalid_fd()
{
    printf("Probando descriptor inválido:\n");

    char *line = get_next_line(-1);
    if (!line)
        printf("NULL (descriptor inválido)\n");
    else
    {
        printf("Esto no debería imprimirse.\n");
        free(line);
    }
    printf("Fin de prueba de descriptor inválido\n\n");
}

int main(void)
{
    printf("Inicio de pruebas de get_next_line\n\n");

    // Comprobaciones
    test_file("archivo_multiples_lineas.txt"); // Archivo con múltiples líneas
    test_file("archivo_vacio.txt");           // Archivo vacío
    test_file("una_linea_sin_salto.txt");     // Archivo con una sola línea sin salto
    test_file("una_linea_con_salto.txt");     // Archivo con una sola línea con salto
    test_invalid_fd();                        // Descriptor inválido

    printf("Fin de todas las pruebas\n");
    return (0);
}

