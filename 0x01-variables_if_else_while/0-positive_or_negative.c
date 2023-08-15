#include <stdio.h>
#include <stdlib.h> /* Include the stdlib.h header for srand() and rand() */
#include <time.h>

/**
 * This program generates a random number and determines if it is positive, zero, or negative.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d is %s\n", n, "positive");
    else if (n == 0)
        printf("%d is %s\n", n, "zero");
    else
        printf("%d is %s\n", n, "negative");

    return (0);
}

