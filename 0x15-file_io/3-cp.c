#include "main.h"
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file
 * Return: A pointer to the buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_desc - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_desc(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments of the program.
 * @argv: An array of pointers of the arguments.
 * Description: If the argument count is incorrect - exit code 97.
 *	If file_from does not exist or cannot be read - exit code 98.
 *	If file_to cannot be created or written - exit code 99.
 *	If file_to or file_from cannot be closed - exit code 100.
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int input, output, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	input = open(argv[1], O_RDONLY);
	r = read(input, buffer, 1024);
	output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (input == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(output, buffer, r);
		if (output == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(input, buffer, 1024);
		output = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_desc(output);
	close_desc(input);

	return (0);
}
