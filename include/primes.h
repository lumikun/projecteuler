#ifndef __PRIMES_H_
#define __PRIMES_H_
#include <stdlib.h>

// TODO need to improve prime factors, could return a LL of prime factors?
void prime_factors(long n);
int* e_sieve(size_t bound);
unsigned long find_prime(unsigned target);

#endif // __PRIMES_H_
