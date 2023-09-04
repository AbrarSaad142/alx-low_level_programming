#include "main.h"

/**
*read_textfile - a function that reads a text file,prints it.
*@filename: this file name.
*@letters:  the number of letters it should read and print
*Return: returns the actual number of letters it could read and print
*otherwise return 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fb, display, readFromFile;
	char *text;

	text = malloc(letters);
	if (text == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	fb = open(filename, O_RDONLY);

	if (fb == -1)
	{
		free(text);
		return (0);
	}
	readFromFile = read(fb, text, letters);
	display = write(STDOUT_FILENO, text, readFromFile);

	close(fb);
	return (display);
}
