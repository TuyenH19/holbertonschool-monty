#include"monty.h"

/**
 * pall - print the stack
 * @stack: pointer to stack
 * @line_number: line number where push function is called
 * Return: Nothing
*/
void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	stack_t *tmp = *stack;

	while (tmp)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
}
