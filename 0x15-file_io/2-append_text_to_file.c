#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: The name of the file
 * @text_content: the text to write in the file
 * Return: 1 on succes -1 on faillure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count])
		{
			count++;
		}
	}

	o = open(filename,  O_WRONLY | O_APPEND);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
