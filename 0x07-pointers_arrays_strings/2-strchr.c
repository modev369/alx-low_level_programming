/**
 * _strchr - Locate character in string.
 * @s: String to search.
 * @c: Character to find.
 *
 * Return: Pointer to first occurrence of character c in string s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
