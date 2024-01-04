#include"monty.h"
char *line;
/**
 * handle_file - handle the file input
 * @filename: name of file
 * Return: Nothing
*/
void handle_file(char *filename)
{
	FILE *file;
	size_t readsize = 0;
	void (*func)(stack_t **, unsigned int);
	int line_number = 1;
	stack_t *stack;

	file = fopen(filename, "r+");
	if (!file)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &readsize, file) != -1)
	{
		func = get_func();
		if (func == NULL)
		{
			dprintf(STDERR_FILENO, "L%i: unknown instruction %s", line_number, line);
			exit(EXIT_FAILURE);
		}
		func(&stack, line_number);
		line_number++;
	}
	free(line);
	free(stack);
	fclose(file);
}
