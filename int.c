#include <cs50.h>
#include <stdio.h>
#include <limits.h>

int add_ints(void);   // function prototype

int main(void)
{
    int result = add_ints();

    if (result == INT_MAX)
    {
        printf("Error reading integers\n");
        return 1;
    }

    printf("Sum = %d\n", result);
    return 0;
}

int add_ints(void)
{
    // read int from stdin
    int i = get_int("Enter an int: ");

    if (i == INT_MAX)
    {
        return INT_MAX;
    }

    int j = get_int("What do you want to add %d to? ", i);

    if (j == INT_MAX)
    {
        return INT_MAX;
    }

    return i + j;
}
//  run it :clang int.c -lcs50 -o int
// (base) mss-MacBook:cprogram michelkadi$ ./int
// Enter an int: 3
// What do you want to add 3 to? 4
// Sum = 7
//The error happens because C does not allow defining a function inside another function.
//In your code, add_ints() is inside main(), which causes this error:
//error: function definition is not allowed here
// In C, all functions must be defined outside other functions