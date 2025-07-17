#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/// COlOR TEXT
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RESET "\x1b[0m"

/// RAM ARRAY
int globalData[7] = {};

void printGame(int pc, int ir, int acc)
{
    printf("--------------------------------------------------\n");
    printf("CPU\n");
    printf("\n| Program Counter: ");
    printf("%d | \n", pc);
    printf("\n| Instruction Register: ");
    printf("%d | \n", ir);
    printf("\n| Accumulator: ");
    printf("%d | \n", acc);
}

/// INPUT STUFF
void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void pressEnterToContinue()
{
    printf("Press Enter to Continue: ");
    clearInputBuffer();
    while (getchar() != '\n')
        ;
}

/// MAIN
int main()
{
    // intialize the runtime stack
    struct Node *top = NULL;

    int option; // for input
    int num;

    /// GAME LOOP
    // while (true)
    printGame(2, 2, 3);
}