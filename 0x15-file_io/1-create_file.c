#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to name of file
 * @text_content: pointer to NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure, if filename = NULL.
 * if text_context is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file_dis, bw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_dis = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bw = write(file_dis, text_content, len);

	if (file_dis == -1 || bw == -1)
		return (-1);

	close(file_dis);
	return (1);
}
