#include "monty.h"
/**
 *
 *
 *
*/

void getting_stream_failed(char *fileName)
{
    dprintf(stderr, "erroe: Can't open file %s\n", fileName);
    free_arguments();
    exit(EXIT_FAILURE);
}

/**
 *
 *
 *
 *
*/

void get_stream(char *fileName)
{
    int fd;

    fd = open(fileName, O_RDONLY);
    if (fd == -1)
        getting_stream_failed(fileName;)

    arguments->stream = fdopen(fd, "r");
    if (arguments->stream == NULL)
    {
        close(fd);
        getting_stream_failed(fileName);
    }
}