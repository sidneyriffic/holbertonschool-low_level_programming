#include <stdio.h>
#include <stdlib.h>

/**
 * main - keygen for crackme5
 *
 * @ac: argc
 * @av: argv
 *
 * Return: 0 on completion, 1 if incorrect num of args
 */
int main(int ac, char *av[])
{
	long nums[] = {0x3877445248432d41, 0x42394530534e6c37,
			    0x4d6e706762695432, 0x74767a5835737956,
			    0x2b554c59634a474f, 0x71786636576a6d34,
			    0x723161513346655a, 0x6b756f494b646850};
	int len = 0, temp, ct, randh;
	char *str = (char *) nums, *uname = av[1], *ptr, password[7];

	if (ac != 2)
		return (1);
	password[6] = 0;
	for (ptr = uname; *ptr; ptr++)
		len++;
	password[0] = str[(len ^ 0x3b) & 0x3f];
	for (ptr = uname, temp = 0; *ptr; ptr++)
		temp += *ptr;
	password[1] = str[(temp ^ 0x4f) & 0x3f];
	for (ptr = uname, temp = 1; *ptr; ptr++)
		temp *= *ptr;
	password[2] = str[(temp ^ 0x55) & 0x3f];
	for (ptr = uname, temp = *ptr; *ptr; ptr++)
		if (temp < *ptr)
			temp = *ptr;
	srand(temp ^ 0xe);
	password[3] = str[rand() & 0x3f];
	for (ptr = uname, temp = 0; *ptr; ptr++)
		temp += *ptr * *ptr;
	password[4] = str[(temp ^ 0xef) & 0x3f];
	for (temp = *uname, ct = 0; ct < temp; ct++)
		randh = rand();
	password[5] = str[(randh ^ 0xe5) & 0x3f];
	printf("%s", password);
	return (0);
}
