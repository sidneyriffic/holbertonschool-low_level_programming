#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * printclass - prints the class from an elf header
 *
 * @head: header information
 *
 * Return: void
 */
void printclass(char *head)
{
	printf("  %-35s", "Class:");
	if (head[4] == 2)
		printf("ELF64\n");
	else if (head[4] == 1)
		printf("ELF32\n");
	else
		printf("<unknown: %02hx>", head[4]);
}

/**
 * printdata - prints the information about data organization
 * from the elf header
 *
 * @head: header information
 *
 * Return: void
 */
void printdata(char *head)
{
	printf("  %-35s", "Data:");
	if (head[5] == 1)
		printf("2's complement, little endian\n");
	else if (head[5] == 1)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %02hx>", head[5]);
}

/**
 * printversion - prints version info from elf header
 *
 * @head: header information
 *
 * Return: void
 */
void printversion(char *head)
{
	printf("  %-35s", "Version:");
	if (head[6] == 1)
		printf("1 (current)\n");
	else
		printf("49 <unknown %%lx>");
}

/**
 * printabi - prints abi version from header information
 *
 * @head: header information
 *
 * Return: void
 */
void printabi(char *head)
{
	printf("  %-35sUNIX - ", "OS/ABI:");
	if (head[7] == 0)
		printf("System V\n");
	else if (head[7] == 1)
		printf("HP-UX\n");
	else if (head[7] == 2)
		printf("NetBSD\n");
	else if (head[7] == 3)
		printf("Linux\n");
	else if (head[7] == 4)
		printf("GNU Hurd\n");
	else if (head[7] == 5)
		printf("Solaris\n");
	else if (head[7] == 6)
		printf("AIX\n");
	else if (head[7] == 7)
		printf("IRIX\n");
	else if (head[7] == 8)
		printf("FreeBSD\n");
	else if (head[7] == 9)
		printf("Tru64\n");
	else if (head[7] == 10)
		printf("Novell Modesto\n");
	else if (head[7] == 11)
		printf("OpenBSD\n");
	else if (head[7] == 12)
		printf("Open VMS\n");
	else if (head[7] == 13)
		printf("NonStop Kernel\n");
	else if (head[7] == 14)
		printf("AROS\n");
	else if (head[7] == 15)
		printf("Fenix OS\n");
	else if (head[7] == 16)
		printf("CloudABI\n");
	else
		printf("<unknown %02x", head[7]);
	printf("  %-35s%d\n", "ABI Version:", head[8]);
}

/**
 * printtype - prints elf filetype from header info
 *
 * @head: header information
 *
 * Return: void
 */
void printtype(char *head)
{
	printf("  %-35s", "Type:");
	if (head[16] == 1)
		printf("REL (Relocatable file)\n");
	else if (head[16] == 2)
		printf("EXEC (Executable file)\n");
	else if (head[16] == 3)
		printf("DYN (Shared object file)\n");
	else if (head[16] == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown>: %02x%02x\n", head[16], head[17]);
}

/**
 * printentry - prints entry address of executable from header
 *
 * @head: header information
 *
 * Return: void
 */
void printentry(char *head)
{
	int i;

	printf("  %-35s0x", "Entry point address:");
	if (head[4] == 2)
		i = 0x1f;
	else
		i = 0x1b;
	while (head[i] == 0 && i > 0x18)
		i--;
	printf("%x", head[i--]);
	while (i >= 0x18)
		printf("%02x", (unsigned char) head[i--]);
	printf("\n");
}

/**
 * main - parses an elf header file
 *
 * @ac: number of args
 * @av: arugment strings
 *
 * Return: 0 on success
 * 1 on incorrect arg number
 * 2 on file open failure
 * 3 on read failure
 * 4 on failure to read enough bytes for a 32 bit file
 */
int main(int ac, char *av[])
{
	int ifile, i;
	char head[32];

	if (ac != 2)
		return (1);
	ifile = open(av[1], O_RDONLY);
	if (ifile == -1)
		return (1);
	i = read(ifile, head, 32);
	if (i == -1)
		return (1);
	if (i < 28)
		return (1);
	if (head[0] != 0x7f || head[1] != 'E' || head[2] != 'L' || head[3] != 'F')
		return (1);
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", (unsigned int) head[i]);
	printf("\n");
	printclass(head);
	printdata(head);
	printversion(head);
	printabi(head);
	printtype(head);
	printentry(head);
	return (0);
}
