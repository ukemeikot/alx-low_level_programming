#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int myfile;
	int no_of_letters;
	int rwr;

	if (filename == NULL)
		return (-1);

	myfile = open(filename, O_WRONLY | O_APPEND);
	if (myfile == -1)
		return (-1);
	if (text_content)
	{
		for (no_of_letters = 0; text_content[no_of_letters]; no_of_letters++)
			;

		rwr = write(myfile, text_content, no_of_letters);

		if (rwr == -1)
			return (-1);
	}

	close(myfile);
	return (1);
}
