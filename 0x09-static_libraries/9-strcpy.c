/**
 * char *_strcpy - copies the string pointed by src
 *
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	while (*src++)
	{
		n++;
	}

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[n] = '\0';
	return (dest);
}
