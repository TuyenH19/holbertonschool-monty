#include"monty.h"

/**
 * split_line - split each line in file
 * @string: string in each line
 * Return: tokens
*/
char **split_line(char *string)
{
    int buffsize = 64;
	int i = 0;
	char **tokens = (char **)malloc(buffsize * sizeof(char *));
	char *token = NULL;

	if (tokens == NULL)
	{   
		free(tokens);
        dprintf(STDERR_FILENO, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
	}

	token = strtok(string, TOK_DELIM);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		if (i >= buffsize)
		{
			buffsize += buffsize;
			tokens = realloc(tokens, buffsize * sizeof(char *));
			if (tokens == NULL)
			{
				free(tokens);
                dprintf(STDERR_FILENO, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[i] = NULL;
	return (tokens);
}
