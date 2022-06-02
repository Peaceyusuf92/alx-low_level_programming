#include "main.h"

/**
  * _strlen - length of a string
  * @s: input character
  * Return: string lenght
**/

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	return (x);
}

/**
* append_text_to_file - appends text at the end of a file.
* @filename: file to append.
* @text_content: info to append into the file.
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t nl;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nl = write(file, text_content, _strlen(text_content));
		if (nl == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
