#include"monty.h"

/**
 * pint - print the top elememnt of the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number
 *
 * Return: Nothing
*/
void pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack == NULL || stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
