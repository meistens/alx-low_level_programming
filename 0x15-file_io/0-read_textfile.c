#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard
 * POSIX output
 * @filename: file to print
 * @letters: number of letters to print
 *
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rd, wr;
	char *fd;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	fd = malloc(sizeof(char) * (letters));
	if (!fd)
		return (0);

	rd = read(fp, fd, letters);
	wr = write(STDOUT_FILENO, fd, rd);

	close(fp);

	free(fd);

	return (wr);
}
