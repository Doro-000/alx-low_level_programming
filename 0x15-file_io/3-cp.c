#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read, wrote, close_src, close_dest;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (check_IO_stat(src, -1, argv[1], 'O'))
		exit(98);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (check_IO_stat(dest, -1, argv[2], 'W'))
		exit(99);
	while (1)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (check_IO_stat(src, -1, argv[1], 'O'))
			exit(98);			
		wrote = write(dest, buffer, n_read);
		if (check_IO_stat(wrote, -1, argv[2], 'W'))
			exit(99);
		if (n_read < 1024)
			break;
	}
	close_src = close(src);
	if (check_IO_stat(close_src, src, NULL, 'C'))
		exit(100);
	close_dest = close(dest);
	if (check_IO_stat(close_dest, dest, NULL, 'C'))
		exit(100);
	return (1);
}

/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: 1 if fail, 0 success
 */
int check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (1);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		return (1);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (1);
	}
	return (0);
}
