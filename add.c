#include"monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number
 *
 * Return: Nothing
*/
void add(stack_t **stack, unsigned int line_number)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = result;
}
