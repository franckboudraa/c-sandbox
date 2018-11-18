/*
// https://en.wikipedia.org/wiki/Fibonacci_number
// Implementing fibonacci number
// Franck Boudraa
// franckboudraa.me
*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h" // for strlen()
#include "unistd.h" // for sleep()
 
int fibonacci(int prev, int cur);
int main(int argc, char *argv[])
{
    // If no argument (or too much)
    if (argc < 2 || argc > 2 || strlen(argv[1]) == 0) goto error;

    // Converting input to integer
    int input = atoi(argv[1]);

    // Only accept positive integer input
    if (input <= 0) goto error;

    printf("%i\n%i\n",input,input);
    fibonacci(input, input);
    
    return 0;
error:
{
    printf("You must provide a positive integer !\n");
    return 1;
}
}

int fibonacci(int prev, int cur)
{
    sleep(1);
    printf("%i\n", prev + cur);
    return fibonacci(cur, prev + cur);
}