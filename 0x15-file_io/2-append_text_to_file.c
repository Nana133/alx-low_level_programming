#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to filename
 * @text_content: string to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	register int ca, g, len = 0;

	if (!filename)
		return (-1);
	ca = open(filename, O_WRONLY | O_APPEND);
	if (ca == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		g = write(ca, text_content, len);
		if (g == -1)
			return (-1);
	}
	close(ca);
	return (1);
}