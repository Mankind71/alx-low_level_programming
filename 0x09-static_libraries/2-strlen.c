/**
 * _strlen - returns the length of a string
 *
 * @s: pointer param s
 *
 * Return: the length
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
