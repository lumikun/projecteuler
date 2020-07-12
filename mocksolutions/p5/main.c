#include <stdio.h>
#include <time.h>

unsigned long gcd(unsigned long n, unsigned long m);
unsigned long lcm(unsigned long n, unsigned long m);
unsigned long even_divisible(short n);

int main()
{
    clock_t begin = clock();
    printf("Answer = %ld\n", even_divisible(20));
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The solution took %f seconds.\n", time_spent);
    return 0;
}


unsigned long gcd(unsigned long n, unsigned long m)
{
    int t;
    while (m != 0) {
        t = m;
        m = n % m;
        n = t;
    }
    return n;
}

unsigned long lcm(unsigned long n, unsigned long m)
{
    return ((unsigned long)n * m / gcd(n, m));
}

unsigned long even_divisible(short n)
{
    unsigned long ret = 1;
    for (int i = 1; i <= n; i++)
        ret = lcm(ret, i);
    return ret;
}
