#include "primes.h"



void prime_factors(long n)
{
    printf("Prime Factors for %ld\n", n);
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }
    for (long i = 3; i <= sqrt(n); i += 2)
        while (n % i == 0) {
            printf("%ld ", i);
            n /= i;
        }
    if (n > 2)
        printf("%ld ", n);
    printf("\n");
}

// Takes bound, returns int[] with 1 set for numbers that
// are not prime up to the *bound*
int* e_sieve(size_t bound)
{
    int* ret = malloc(sizeof(int)*bound);
    for (size_t i = 2; i < bound; i++)
        if(!ret[i])
            for (size_t j = i; i * j < bound; j++)
                ret[i * j] = 1;
    return ret;
}
