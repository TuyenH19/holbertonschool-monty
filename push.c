#include"monty.h"

/**
 * push - push an element onto the stack
 * @stack: pointer to top of the stack
 * @line_number: current line number
 * @arg: arguments contain the value input
 *
 * Return: Nothing
*/
void push(stack_t **stack, unsigned int line_number, char *arg)
{
	stack_t *new_node;
	int number;

	if (arg == NULL || !is_integer(arg))
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	number = atoi(arg);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = number;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * is_integer - to check if a string input is an integer
 * @str: string input
 *
 * Return: 1 if string is integer, 0 otherwise.
*/
int is_integer(const char *str)
{
	int i = 0;

	if (str[0] == '-')
		i++;
	for (; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
