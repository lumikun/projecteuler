#include <stdio.h>
#include <time.h>
#include <math.h>

void prime_factors(long n);

int main()
{
    clock_t begin = clock();
    prime_factors(600851475143);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("This solution took %f seconds. \n", time_spent);
    return 0;
}


// TODO Should make this so it returns a pointer to an array
// off prime Factors, or maybe a list would be better??? idk.
void prime_factors(long n)
{
    printf("Prime factors of %ld\n", n);
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n/2;
    }
    for (long i = 3; i <= sqrt(n); i = i+2) {
        while (n % i == 0) {
            printf("%ld ", i);
            n = n / i;
        }

    }
    if (n > 2)
        printf("%ld \n", n);
}
