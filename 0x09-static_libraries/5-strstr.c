#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	char *addy;

	while (*haystack++)
	{
		if (*needle != *haystack)
		{
			haystack++;
		}
		else
		{
			while (*needle++)
			{
				if (*needle++ == *haystack++)
				{
					addy = needle;
				}
			}
			return (addy);
		}
	}
	return (NULL);
}
