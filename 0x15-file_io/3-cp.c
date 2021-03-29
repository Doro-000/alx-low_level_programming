#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read, close_src, close_dest, temp;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "%s %s", "Error: Can't read from file", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "%s %s", "Error: Can't write to", argv[2]);
		exit(99);
	}
	while (1)
	{
		n_read = read(src, buffer, 1024);
		if (n_read < 1024)
		{
			buffer[n_read] = '\0';
			write(dest, buffer, n_read);
			break;
		}
		write(dest, buffer, 1024);
	}
	close_src = close(src);
	close_dest = close(dest);
	if (close_src == -1 || close_dest == -1)
	{
		temp = (close_src == -1) ? close_src : close_dest;
		dprintf(STDERR_FILENO, "%s %d", "Error: Can't close fd", temp);
		exit(100);
	}
	return (1);
}
