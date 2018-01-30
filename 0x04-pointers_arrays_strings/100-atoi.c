/**
 * _atoi - convert a string representation of an integer to an integer
 *
 * @s: string possibly containing an integer
 *
 * Return: first integer in string
 */
int _atoi(char *s)
{
	int pluses = 0, minuses = 0;
	int sum = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '+')
			pluses++;
		else if (*s == '-')
			minuses++;
		else if (*s >= '0' && *s <= '9')
			break;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}

	if (minuses > pluses)
		sum = -sum;

	return (sum);
}
