/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:00:00 by marvin            #+#    #+#             */
/*   Updated: 2024/12/12 09:51:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*gnl_update_buffer(char *buffer, char *read_data)
{
	char	*temp;

	if (!buffer)
		return (ft_strdup(read_data));
	temp = ft_strjoin(buffer, read_data);
	free(buffer);
	return (temp);
}

static char	*gnl_extract_line(char **buffer)
{
	char	*line;
	char	*temp;
	char	*newline_pos;

	if (!*buffer || !**buffer)
		return (NULL);
	newline_pos = ft_strchr(*buffer, '\n');
	if (!newline_pos)
	{
		line = ft_strdup(*buffer);
		free(*buffer);
		*buffer = NULL;
		return (line);
	}
	line = ft_substr(*buffer, 0, newline_pos - *buffer + 1);
	temp = ft_strdup(newline_pos + 1);
	free(*buffer);
	*buffer = temp;
	return (line);
}

static char	*gnl_read_to_buffer(int fd, char **buffer)
{
	char	*read_buffer;
	ssize_t	bytes_read;

	read_buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!read_buffer)
		return (NULL);
	bytes_read = read(fd, read_buffer, BUFFER_SIZE);
	if (bytes_read < 0)
	{
		free(read_buffer);
		return (NULL);
	}
	read_buffer[bytes_read] = '\0';
	*buffer = gnl_update_buffer(*buffer, read_buffer);
	free(read_buffer);
	return (*buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!gnl_read_to_buffer(fd, &buffer))
		return (NULL);
	return (gnl_extract_line(&buffer));
}
