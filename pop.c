#include "monty.h"

/**
 * pop - remove the top element of the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number
 *
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!stack || !*stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;

	if (!*stack)
		return;

	(*stack)->prev = NULL;
}
