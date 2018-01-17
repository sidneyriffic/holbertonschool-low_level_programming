#include<stdio.h>

/**
 * main - This program outputs the size of various data types
 *
 * Return: 0 on completion
 */
int main(void)
{
	printf("%s%i%s\n", "Size of a char: ", sizeof(char), " byte(s)");
	printf("%s%i%s\n", "Size of an int: ", sizeof(int), " byte(s)");
	printf("%s%i%s\n", "Size of a long int: ", sizeof(long int),
		" byte(s)");
	printf("%s%i%s\n", "Size of a long long int: ", sizeof(long long int),
		" byte(s)");
	printf("%s%i%s\n", "Size of a float: ", sizeof(float), " byte(s)");
	return (0);
}
