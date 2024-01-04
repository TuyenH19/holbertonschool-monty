#include"monty.h"

/**
 * pop - print the top
 * @stack: pointer to stack
 * @line_number: line number where push function is called
 * Return: Nothing
*/
void pop(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	stack_t *tmp;

	if (*stack)
	{
		tmp = *stack;
		*stack = tmp->next;
		if (*stack != NULL)
			(*stack)->prev = NULL;
		free(tmp);
	}
}
