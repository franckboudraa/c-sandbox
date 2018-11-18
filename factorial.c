/*
// https://en.wikipedia.org/wiki/Factorial
// Implementing factorial
// Franck Boudraa
// franckboudraa.me
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h" // for strlen()

int factorial(int n);
int main(int argc, char * argv[])
{
      // If no argument (or too much)
    if (argc < 2 || argc > 2 || strlen(argv[1]) == 0) goto error;

    // Converting input to integer
    int input = atoi(argv[1]);

    // Only accept positive integer input
    if (input <= 0) goto error;

    int res = factorial(input);

    printf("%i\n", res);
    return 0;

error:
{
    printf("You must provide a positive integer !\n");
    return 1;
}
}

int factorial(int n)
{
    return n <= 1 ? n : n * (factorial(n - 1));
}