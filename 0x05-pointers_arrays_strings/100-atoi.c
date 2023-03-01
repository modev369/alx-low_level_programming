/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
	int sign = 1, num = 0;
	char *ptr = s;

	while (*ptr != '\0')
	{
	if (*ptr == '-')
	sign = -sign;
	if (*ptr >= '0' && *ptr <= '9')
	{
	num = num * 10 + (*ptr - '0');
	if (*(ptr + 1) < '0' || *(ptr + 1) > '9')
	break;
	}
	ptr++;
	}
	return (sign * num);
}
