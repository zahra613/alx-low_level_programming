#include "main.h"
void error_exit(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

void close_file(int fd) {
    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[])
{
	int f_rd, f_wr;
	 char buffer[BUFSIZ];
    ssize_t bytes_read, bytes_written;
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    f_rd = open(argv[1], O_RDONLY);
    if (f_rd < 0) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

     f_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (f_wr < 0) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close_file(f_rd);
        exit(99);
    }

    while ((bytes_read = read(f_rd, buffer, BUFSIZ)) > 0) {
        bytes_written = write(f_wr, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close_file(f_rd);
            close_file(f_wr);
            exit(99);
        }
    }

    if (bytes_read < 0) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(f_rd) == -1 || close(f_wr) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd\n");
        exit(100);
    }

    return 0;
}

