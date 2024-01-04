#include"monty.h"

/**
 * pint - print the top
 * @stack: pointer to stack
 * @line_number: line number where push function is called
 * Return: Nothing
*/
void pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack)
		printf("%i\n", (*stack)->n);
}
