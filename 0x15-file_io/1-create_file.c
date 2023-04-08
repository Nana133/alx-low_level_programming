#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: string that is appended to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	register int ca, g len = 0;

	if (!filename)
		return (-1);
	ca = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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
