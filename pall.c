#include"monty.h"

/**
 * pall - print all the value on the stack
 * @stack: pointer to the top of the stack
 * @line_number: current line number
 *
 * Return: Nothing
*/
void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	stack_t *tmp = *stack;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
