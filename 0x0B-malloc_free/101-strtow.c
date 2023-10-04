#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **words, *temp_holder;

	int i, k = 0, len = 0, c = 0, start, end, nWord;

	while (*(str + len))
		len++;
	nWord = count_word(str);
	if (nWord == 0)
		return (NULL);

	words = (char **) malloc(sizeof(char *) * (nWord + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp_holder = (char *) malloc(sizeof(char) * (c + 1));
				if (temp_holder == NULL)
					return (NULL);
				while (start < end)
					*temp_holder++ = str[start++];
				*temp_holder = '\0';
				words[k] = temp_holder - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	words[k] = NULL;

	return (words);
}

