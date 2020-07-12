#include "primes.h"


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
