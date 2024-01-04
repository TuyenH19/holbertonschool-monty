#include"monty.h"
/**
 * get_func - pointer to the appropriate function
 * 
*/
void (*get_func(void))(stack_t **, unsigned int)
{
    int i = 0, j;
    int valid;
    int length;

    instruction_t instructions[] = {
        {"push", push},
        {"pall", pall},
        {"pint", pint},
        {"pop", pop},
        {"nop", nop},
        {NULL, NULL}
    };
    while (instructions[i].opcode)
    {
        j = 0;
        valid = 1;
        length = strlen(instructions[i].opcode);
        while (j < length)
        {
            if (instructions[i].opcode[j] != line[j])
            {
                valid = 0;
                break;
            }
            j++;
        }
        if (valid == 1 && (line[j] == '\n' || line[j] == ' ' || line[j] == '\0'))
            break;
        i++;
    }
    return (instructions[i].f);
}
