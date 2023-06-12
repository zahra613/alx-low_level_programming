#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

/* Function to print ELF header information */
void printElfHeaderInfo(const Elf64_Ehdr *header) {
    /* Print Magic number */
    printf("%-35s%s\n", "Magic:", "ELF");

    /* Print Class */
    printf("%-35s%s\n", "Class:", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");

    /* Print Data encoding */
    printf("%-35s%s\n", "Data:", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

    /* Print Version */
    printf("%-35s%d (current)\n", "Version:", header->e_ident[EI_VERSION]);

    /* Print OS/ABI */
    printf("%-35s%s\n", "OS/ABI:", "UNIX - System V");

    /* Print ABI Version */
    printf("%-35s%d\n", "ABI Version:", header->e_ident[EI_ABIVERSION]);

    /* Print Type */
    printf("%-35s", "Type: ");
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
            printf("<unknown>\n");
    }

    /* Print Entry point address */
    printf("%-35s0x%lx\n", "Entry point address:", header->e_entry);
}

int main(int argc, char **argv) 
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;
    /* Check number of arguments */
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    /* Open the file */
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: unable to open file %s\n", argv[1]);
        exit(98);
    }

    /* Read in the ELF header */
    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        fprintf(stderr, "Error: unable to read ELF header of %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    /* Verify header magic number to ensure file is an ELF file */
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        close(fd);
        exit(98);
    }

    /*Print out each field of the ELF header*/
    printElfHeaderInfo(&header);

    /*Close the file*/
    close(fd);

    return 0;
}

