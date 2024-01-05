#include"monty.h"
/**
 * get_file_extension - get extension of the file input
 * @filename: the name of file input
 *
 * Return: file extension
*/
char *get_file_extension(char *filename)
{
	char *dot = strrchr(filename, '.');

	if (dot && dot != filename)
		return (dot + 1);
	else
		return ("");
}
