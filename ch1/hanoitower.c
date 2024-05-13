#include <stdio.h>

/*
 * hanoitower.c: An implementation of a simple recurrence relation.
 *
 * Meant to simply count the number of disc moves for the hanoi tower
 * problem.
 */
int main()
{
    int n = 64; // number of discs
    int64_t final_iteration = 0;

    for (int t_zero = 0; t_zero < n; t_zero++)
    {
        final_iteration = 2 * final_iteration + 1;
    }
    printf("For n = %d, it will take %lld moves", n, final_iteration);
    return 0;
}