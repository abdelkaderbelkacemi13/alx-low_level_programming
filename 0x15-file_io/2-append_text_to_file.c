#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);
	int result;

	switch (1)
	{
	case 1:
		if (!filename)
			result = -1;
		else
		{
			fd = open(filename, O_WRONLY | O_APPEND);
			if (fd == -1)
				result = -1;
			else
			{
				if (len)
					bytes = write(fd, text_content, len);
				close(fd);
				result = (bytes == len) ? 1 : -1;
			}
		}
		break;
	default:
		result = -1;
	}
	return (result);
}
