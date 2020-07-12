#include "problems.h"
#include "primes.h"

void print_problems(void)
{
    problem_10();
}

void problem_10(void)
{
    clock_t begin = clock();
    int* primes = e_sieve(2000000);
    int ans = 0;
    for (size_t i = 0; i < 2000000; i++)
        if (!primes[i])
            ans += i;
    printf("ans: %d\n", ans);
    free(primes);
    clock_t end = clock();
    print_time(begin, end);
}

void print_time(clock_t begin, clock_t end)
{
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("This Solution Took %f seconds to execute.\n\n", time_spent);
}
