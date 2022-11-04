#include "main.h"

/**
 * append_text_to_file -appends text at the end of a file
 * @filename: target file
 * @text_content: text to append
 * Return: 1 if file exists or -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int letters;
	int rwr;

	fp = open(filename, O_WRONLY | O_APPEND);

	if (!filename && fp == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(fp, text_content, letters);

		if (rwr == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
