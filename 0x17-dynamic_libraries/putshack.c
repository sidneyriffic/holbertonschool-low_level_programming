#include <unistd.h>
#include <string.h>

int puts(char *a)
{
	a = "Congratulations, you won the jackpot!";
	write(1, a, strlen(a));
}

int printf(char *form, int num)
{
	static int ct = 0;

	if (ct == 0)
		form = "9 ";
	if (ct == 1)
		form = "8 ";
	if (ct == 2)
		form = "10 ";
	if (ct == 3)
		form = "24 ";
	if (ct == 4)
		form = "75 ";
	if (ct == 5)
		form = "+ 9\n";
	write(1, form, strlen(form));
	return 1;
}
