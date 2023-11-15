#include "hexporter.h"

extern void printHex(char);
extern int argError();

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

inline void printHex(char input)
{
    if (input == ' ' || input == '\n')
    {
        printf("\b%c", input);
    }
    else
    {
        printf("%X-", input);
    }
}

inline int argError()
{
    printf("Incorrect number of arguments or empty string passed\n");
    printf("Usage: ./hexport [string]\n");
    return -1;
}