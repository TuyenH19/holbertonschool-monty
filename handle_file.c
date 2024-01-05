#include"monty.h"
/**
 * handle_file - handle the file input
 * @filename: name of file
 * Return: Nothing
*/
void handle_file(char *filename)
{
	FILE *file;
	char *line = NULL;
	size_t readsize = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	file = fopen(filename, "r");
	if (!file)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &readsize, file) != -1)
	{
		line_number++;
		get_func(line, &stack, line_number);
	}
	fclose(file);
	free(line);
	free_stack(stack);
}

/**
 * free_stack - free the stack
 * @stack: the stack to be freed
 * 
 * Return: Nothing
*/
void free_stack(stack_t *stack)
{
    stack_t *tmp = NULL;

    while (stack != NULL)
    {
        tmp = stack;
        stack = stack->next;
        free(tmp);
    }
}
