/**
 * _strncat - concatenate two strings together for atmost n characters
 * @dest: destination memory
 * @src: source memory
 * @n: n characters to concatenate
 * Return: a pointer a the destination memory
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr_src = src;
	char *ptr_dest = dest;
	int count = 0;

	while (*dest) /*keep executing while the pointer is valid*/
		dest++;
	while (*src)
	{
		src++;
		count++;
	}
	if (n < count)
	{
		while (n)
		{
			*dest = *ptr_src;
			dest++;
			ptr_src++;
			n--;
		}
	}
	else
	{
		while (count)
		{
			*dest = *ptr_src;
			dest++;
			ptr_src++;
			count--;
		}
	}
	return (ptr_dest);
}
