#include "main.h"
/**
 * read_textfile - reads a text file and prints to the standard output
 * @letters: number of letters to read and print
 * @filename: name of the file to be read
 * Return: the number of letters printed, or 0 if it failed.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int mn, st;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	mn = read(fd, buf, letters);
	if (mn < 0)
	{
		free(buf);
		return (0);
	}
	buf[mn] = '\0';
	close(fd);
	st = write(STDOUT_FILENO, buf, mn);
	if (st < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (st);
}
