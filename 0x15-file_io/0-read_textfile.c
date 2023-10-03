#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the stdout
 * @filename: pointer to name of file
 * @letters: num of letters it should read and print
 *
 * Return: 0 if file cannot be opened or read, if filename is NULL
 * or if write fails or doesn't write exp number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_dis, bw, br;
	char *buff;

	file_dis = open(filename, O_RDONLY);

	if (file_dis == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	br = read(file_dis, buff, letters);
	bw = write(STDOUT_FILENO, buff, br);

	free(buff);
	close(file_dis);
	return (bw);
}
