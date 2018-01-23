#ifndef HolbertonH
#define HolbertonH

int _putchar(char);

/**
 * printstr - print a given string using _putchar
 * @x: a null terminated character array to be printed
 * Return: 0 on success
 */
int _printstr(char x[])
{
	int i = 0;

	while (x[i] != '\0')
		_putchar(x[i++]);
	return (0);
}

void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);

#endif
