#include "numman.h"
#include "sums.h"

int reverse(int n)
{
    int ret = 0;
    while (n != 0) {
        ret *= 10;
        ret += n % 10;
        n = n / 10;
    }
    return ret;
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

long difference(long a, long b)
{
    return (sum_squared(a, b) - sum_of_squares(a, b));
}
