/**
 * _strncpy - copies n characters into destination
 * @dest: destination memory
 * @src: source memory
 * @n: n characters to copy
 * Return: a pointer a the destination memory
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
