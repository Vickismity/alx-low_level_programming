#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters:the number of letters it should read and print
 * @filename: filename (string pointers)
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nwr, nrd;
	char *ptr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	nrd = read(fd, ptr, letters);
	nwr = write(STDOUT_FILENO, ptr, nrd);

	close(fd);
	free(ptr);
	return (nwr);
}
