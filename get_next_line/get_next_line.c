#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*line;
	char	buffer[BUFFER_SIZE + 1];
	int	bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (NULL);

	buffer[bytes_read] = '\0';

	line = malloc((bytes_read + 1) * sizeof(char));
	if (!line)
		return (NULL);

