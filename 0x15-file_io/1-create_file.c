#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: string to write the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	for (letters = 0; text_content[letters]; letters++)
		;
	rwr = write(fp, text_content, letters);

	if (fp == -1 && rwr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	close(fp);

	return (1);
}
