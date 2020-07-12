#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define UPPER_BOUND 2000000

int* e_sieve(size_t bound);

int main()
{
    clock_t begin = clock();
    int* prime_list = e_sieve(UPPER_BOUND);
    unsigned long long ans = 0;
    for (size_t i = 0; i < UPPER_BOUND; i++)
        if(prime_list[i])
            ans += (unsigned long long)i;
    printf("answer: %llu\n", ans);
    free(prime_list);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("This Solution took %f seconds.\n", time_spent);
    return 0;
}

int* e_sieve(size_t bound)
{
    int* primes = malloc(sizeof(int)*bound);
    for (size_t i = 2; i < bound; i++)
        primes[i] = 1;
    for (size_t i = 2; i < bound; i++)
        if (primes[i])
            for (size_t j = i; i * j < bound; j++)
                primes[i * j] = 0;
    return primes;
}
