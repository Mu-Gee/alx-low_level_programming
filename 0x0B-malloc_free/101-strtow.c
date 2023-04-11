#include "main.h"

/**
 * strtow - create an array of words from string
 * @str: string
 * Description: create array of words from string, last element should be null
 * Return: pointer to strings, NULL if fails
 **/

char **strtow(char *str)
{
	char **list;
	int num_words, i, k, j;

	j = 0;
	num_words = word_count(str, 0);

	if (str == NULL || num_words == 0)
		return (NULL);
	list = malloc((num_words + 1) * sizeof(char *));
	if (list == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		j += findword(&str[j]);
		list[i] = (char *)malloc((wordlen(str) + 1) * sizeof(char));
		if (list[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(list[i]);
			free(list);
			return (NULL);
		}
		for (k = 0; str[j] != ' ' && str[j] != '\0'; k++)
		{
			list[i][k] = str[j];
			j++;
		}
		list[i][k] = '\0';
	}
	list[i] = NULL;
	return (list);
}

