#include"monty.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
*/
int main(int argc, char **argv)
{
	char *filename;

	(void) argv;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];
	if (strcmp(get_file_extension(filename), "m") != 0)
	{
		dprintf(STDERR_FILENO, "%s containing monty instructions with an error\n", filename);
		exit(EXIT_FAILURE);
	}
	handle_file(filename);
	return (0);
}
