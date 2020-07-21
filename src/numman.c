#include "numman.h"
#include "sums.h"
#include <string.h>
#include <math.h>

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

unsigned long long product_array(char *array)
{
    size_t len = strlen(array);
    unsigned long long ret = 0;
    for (size_t i = 0; i <= len - 13; i++) {
        unsigned long long product = 1;
        for (size_t j = 0; j < 13; j++) {
            product *= (array[i + j] - 0x30);
            if (product == 0)
                break;
        }
        if (product > ret)
            ret = product;
    }
    return ret;
}

int check_pithagorus(int a, int b, int c)
{
    return pow(a, 2) + pow(b, 2) == pow(c, 2);
}

int factor_count(int n)
{
    double square = sqrt(n);
    int isquare = (int)square;
    int count = (double)isquare == square ? -1 : 0;
    for (int i = 1; i <= isquare; i++)
        if (0 == n % i)
            count += 2;
    return count;
}

long lattice_paths(int n)
{
    long p = 1;
    for (int i = 0; i < n; i++) {
        p *= (2 * n) - i;
        p /= i + 1;
    }
    return p;
}
