#include"monty.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
*/
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	handle_file(argv[1]);
	return (0);
}
