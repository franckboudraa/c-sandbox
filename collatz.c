/*
// https://en.wikipedia.org/wiki/Collatz_conjecture
// Implementing collatz conjecture
// Franck Boudraa
// franckboudraa.me
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h" // for strlen()

int collatz(int n);
int main(int argc, char *argv[])
{
    // If no argument (or too much)
    if (argc < 2 || argc > 2 || strlen(argv[1]) == 0) goto error;

    // Converting input to integer
    int input = atoi(argv[1]);

    // Only accept positive integer input
    if(input <= 0) goto error;

    collatz(input);
    return 0;

error:
{
    printf("You must provide a positive integer !\n");
    return 1;
}
}

int collatz(int n)
{
    printf("%i\n", n);

    // Collatz formula
    if (n <= 1)
        return 0;
    else if (n % 2 == 0)
        return collatz(n / 2);
    else
        return collatz((n * 3) + 1);
}