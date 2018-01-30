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
	int i, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
			pluses++;
		else if (s[i] == '-')
			minuses++;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		sum *= 10;
		sum += s[i] - '0';
		i++;
	}

	if (minuses > pluses)
		sum = -sum;

	return (sum);
}
