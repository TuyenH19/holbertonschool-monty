#include "monty.h"
#include <unistd.h>
#include <stdlib>

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to stack
 * @line_number: line number where swap function is called
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack || !((*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;

	(*stack)->prev = temp;
	(*stack)->next = temp->next;

	if (temp->next)
		temp->next->prev = *stack;

	temp->prev = NULL;
	temp->next = *stack;

	*stack = temp;
}