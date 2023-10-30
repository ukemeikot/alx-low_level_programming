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
	FILE *myfile;
	char *store;
	size_t readsize;
	size_t writesize;

	if (filename == NULL)
		return (0);
	myfile = fopen(filename, "r");
	store = malloc(letters + 1);
	if (store == NULL)
	{
		fclose(myfile);
		return (0);
	}
	readsize = fread(store, 1, letters, myfile);
	if (readsize <= 0)
	{
		fclose(myfile);
		free(store);
		return (0);
	}
	store[readsize] = '\0';
	writesize = fwrite(store, 1, readsize, stdout);
	if (writesize != readsize)
	{
		return (0);
	}
	return ((ssize_t)writesize);
}
