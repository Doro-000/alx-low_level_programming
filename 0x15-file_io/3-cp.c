#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read, wrote, close_src, close_dest, temp;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (1)
	{
		n_read = read(src, buffer, 1024);
		if (n_read < 1024)
		{
			buffer[n_read] = '\0';
			write(dest, buffer, n_read);
			check_IO_stat(wrote, -1, argv[2], 'W');
			break;
		}
		wrote = write(dest, buffer, 1024);
		check_IO_stat(wrote, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (1);
}

/**
 * check_src - checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (stat == -1)
	{
		if (mode == 'C')
		{
			dprintf(STDERR_FILENO, "%s %d%c", "Error: Can't close fd", fd, '\n');
			exit(100);
		}
		else if (mode == 'O')
		{
			dprintf(STDERR_FILENO, "%s %s%c", "Error: Can't read from file", filename, '\n');
			exit(98);
		}
		else if (mode == 'W')
		{
			dprintf(STDERR_FILENO, "%s %s%c", "Error: Can't write to", filename, '\n');
			exit(99);
		}
	}
}
