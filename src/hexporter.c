#include <stdio.h>
#include <string.h>

#include "hexporter.h"


int main(int argc, char* argv[])
{
    if (argc != 2 || strlen(argv[1]) < 1) return argError();
    int length = strlen(argv[1]);

    for (int i = 0; i < length; i++)
    {
        printHex(argv[1][i]);
    }
    printf("\b");
    return 0;
}

void printHex(char input)
{
    if (input == ' ')
    {
        printf("\b%c", input);
    }
    else
    {
        printf("%X-", input);
    }
}

int argError()
{
    printf("Incorrect number of arguments or empty string passed\n");
    printf("Usage: ./hexporter [string]\n");
    return -1;
}