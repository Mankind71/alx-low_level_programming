/**
 * _memset -  fills memory with a constant byte.
 *
 * @s: memory area pointer
 * @b: the desired value
 * @n: number of bytes
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
