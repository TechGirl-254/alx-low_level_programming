#include "main.h"

/**
 * _strstr -locate a first ocurrence of substring
 * @haystack: string
 * @needle: substring
 * Return: &haystack[i] (Success) 0 (Not found)
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;

	}

	return ('\0');
}
