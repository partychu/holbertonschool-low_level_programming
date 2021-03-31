#include "holberton.h"

/**
 * read_textfile - reads a txt file and prints it to the POSIX stdout
 * @filename: name of file
 * @letters: number of letters
 * Return: 0 if fail, fd if succesfull
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes, wbytes;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, buffer, letters);

	wbytes = write(STDOUT_FILENO, buffer, bytes);

	free(buffer);
	close(fd);
	return (wbytes);
}
