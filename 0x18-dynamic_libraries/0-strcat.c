/**
 * _strcat - concatenate two strings together
 * @dest: destination memory
 * @src: source memory
 * Return: a pointer a the destination memory
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest) /*keep executing while the pointer is valid*/
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
