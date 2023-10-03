#include "main.h"

/**
 * append_text_to_file - function that appends text at end of a file
 * @filename: pointer to name of file
 * @text_content: pointer to NULL terminated string added to file end
 *
 * Return: 1 on success, -1 on failure
 * If filename is NULL return -1, If text_content is NULL, do not add
 * anything to the file. Return 1 if the file exists and -1 if the
 * file does not exist or if you do not have the required permissions
 * to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_dis, bw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file_dis = open(filename, O_WRONLY | O_APPEND);
	bw = write(file_dis, text_content, len);

	if (file_dis == -1 || bw == -1)
		return (-1);
	close(file_dis);
	return (1);
}
