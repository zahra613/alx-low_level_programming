#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char* message) {
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(const Elf64_Ehdr* header) 
{
	int i;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             ");
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		print_error("Invalid ELF class");

	printf("  Data:                              ");
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		print_error("Invalid ELF data encoding");

	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
	}

	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (header->e_type) {
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			print_error("Unknown file type");
	}

	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char* argv[])
{
	 Elf64_Ehdr header;
	const char *filename;
	int fd;
	if (argc != 2) {
		print_error("Invalid number of arguments");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		print_error("Failed to open file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header)) {
		print_error("Failed to read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3) {
		print_error("Invalid ELF magic number");
	}

	print_elf_header(&header);

	close(fd);

	return 0;
}
