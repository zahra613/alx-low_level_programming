#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

int isElfFile(int fd) {
    char ident[4];
    ssize_t bytes_read = read(fd, ident, sizeof(ident));
    if (bytes_read != sizeof(ident))
        return 0;

    return (ident[0] == ELFMAG0 &&
            ident[1] == ELFMAG1 &&
            ident[2] == ELFMAG2 &&
            ident[3] == ELFMAG3);
}

void printElfHeaderInfo(const Elf64_Ehdr *header) {
    printf("%-35s%s\n", "Magic:", "ELF");
    printf("%-35s%s\n", "Class:", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("%-35s%s\n", "Data:", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("%-35s%d (current)\n", "Version:", header->e_ident[EI_VERSION]);
    printf("%-35s%s\n", "OS/ABI:", "UNIX - System V");
    printf("%-35s%d\n", "ABI Version:", header->e_ident[EI_ABIVERSION]);
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
    printf("%-35s0x%lx\n", "Entry point address:", header->e_entry);
}

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

     fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: unable to open file %s\n", argv[1]);
        exit(98);
    }

    if (!isElfFile(fd)) {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        close(fd);
        exit(98);
    }

    lseek(fd, 0, SEEK_SET);

   bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        fprintf(stderr, "Error: unable to read ELF header of %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    printElfHeaderInfo(&header);

    close(fd);

    return 0;
}

