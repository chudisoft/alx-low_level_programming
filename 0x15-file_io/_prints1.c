#include "elf_h.h"

/**
 * check_elf - Verify a valid ELF file.
 * @e_ident: Array pointer to ELF magic numbers.
 *
 * Description: return 0 if success, 98 if false.
 */
void check_elf(unsigned char *e_ident)
{
	int c;

	for (c = 0; c < 4; c++)
	{
		if (e_ident[c] != 127 &&
				e_ident[c] != 'E' &&
				e_ident[c] != 'L' &&
				e_ident[c] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints ELF header's magic numbers.
 * @e_ident: Array pointer of the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int c;

	printf("  Magic:   ");

	for (c = 0; c < EI_NIDENT; c++)
	{
		printf("%02x", e_ident[c]);

		if (c == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints class of an ELF header.
 * @e_ident: Array pointer of the ELF class.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data from ELF header.
 * @e_ident: Array pointer to the ELF class.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - Prints version of an ELF header.
 * @e_ident: Array pointer to the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

