#include "monty.h"

/**
 * pop - remove the top element of the stack
 * @stack: pointer to stack
 * @line_number: line number where pop function is called
 *
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;

	free(temp);
}
