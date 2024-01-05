#include"monty.h"
/**
 * get_func - pointer to the appropriate function
 * @line: the line input to get function
 * @stack: pointer to top of the stack
 * @line_number: current line number in file
 *
 * Return: Nothing
*/
void get_func(char *line, stack_t **stack, unsigned int line_number)
{
	char *tokens = strtok(line, " \t\n");
	char *tok = strtok(NULL, " \t\n");

	if (!tokens)
		return;
	if (strcmp(tokens, "push") == 0)
		push(stack, line_number, tok);
	else if (strcmp(tokens, "pall") == 0)
		pall(stack, line_number);
	else if (strcmp(tokens, "pint") == 0)
		pint(stack, line_number);
	else if (strcmp(tokens, "pop") == 0)
		pop(stack, line_number);
	else if (strcmp(tokens, "swap") == 0)
		swap(stack, line_number);
	else if (strcmp(tokens, "add") == 0)
		add(stack, line_number);
	else if (strcmp(tokens, "nop") == 0)
		nop(stack, line_number);
	else
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line_number, tokens);
		exit(EXIT_FAILURE);
	}
}
