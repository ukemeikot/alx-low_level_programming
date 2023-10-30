#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: pointer to a file location in memory
 * @letters: the number of characters to be printed.
 * Return: actual number of letters it could read and print.
 * 0 if filename is NULL
 * 0 if write fails.
 * 0 if file cannot be opened or read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_D;
	char *store;
	size_t readsize;
	size_t writesize;

	if (filename == NULL)
		return (0);
	file_D = open(filename, O_RDONLY);
	store = malloc(sizeof(char) * letters);
	if (file_D == -1)
	{
		return (0);
	}
	if (store == NULL)
		return (0);
	readsize = read(file_D, store, letters);
	writesize = write(STDOUT_FILENO, store, readsize);
	close(file_D);
	free(store);
	return ((ssize_t)writesize);
}
