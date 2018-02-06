/**
 * set_string - set value of a pointer to a char
 *
 * @s: pointer to pointer to set
 * @to: point to set the pointer pointed to by s to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
