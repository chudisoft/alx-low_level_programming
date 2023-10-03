#include "elf_h.h"
#include "_prints1.c"
#include "_prints2.c"


/**
 * main - Displays information contained in
 *        ELF header at the start of an ELF file.
 * @argc: Args count supplied to the program.
 * @argv: Array pointer to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Return 98 if the file is not an ELF File or
 *              the function fails.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int _oHandler, _rHandler;

	_oHandler = open(argv[1], O_RDONLY);
	if (_oHandler == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(_oHandler);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	_rHandler = read(_oHandler, header, sizeof(Elf64_Ehdr));
	if (_rHandler == -1)
	{
		free(header);
		close_elf(_oHandler);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(_oHandler);
	return (0);
}
