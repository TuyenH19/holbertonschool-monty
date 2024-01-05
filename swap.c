#include"monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number
 *
 * Return: Nothing
*/
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int number = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	number = tmp->n;
	tmp->n = number;

	tmp->n = tmp->next->n;
	tmp->next->n = number;
}
