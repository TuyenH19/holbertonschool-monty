#include"monty.h"

/**
 * push - push an element onto the stack
 * @stack: pointer to stack
 * @line_number: line number where push function is called
 *
 * Return: Nothing
*/
void push(stack_t **stack, unsigned int line_number)
{
	char **tokens;
	int number;
	stack_t *my_node;
	
	my_node = malloc(sizeof(stack_t));
	if (!my_node)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	tokens = split_line(line);
	
	number = atoi(tokens[1]);
	if (number == 0)
	{
		dprintf(STDERR_FILENO, "L%i: usage: push integer\n", line_number);
		free(my_node);
		free(tokens);
		exit(EXIT_FAILURE);
	}

	my_node->n = number;
	my_node->prev = NULL;
	my_node->next = *stack;

	if (*stack)
		(*stack)->prev = my_node;
	*stack = my_node;
	free(tokens);
}
