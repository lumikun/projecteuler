#include "sums.h"
#include <math.h>

int even_fib_sum(int bound)
{
    if (bound < 2)
        return 0;

    int ef1 = 0, ef2 = 2;
    int sum = ef1 + ef2;

    while (ef1 <= bound) {
        int ef3 = 4 * ef2 + ef1;
        if (ef3 > bound)
            break;
        ef1 = ef2;
        ef2 = ef3;
        sum += ef2;
    }
    return sum;
}

long sum_of_squares(int n, int m)
{
    long ret = 0;
    for (int i = n; i <= m; i++)
        ret += pow(i, 2);
    return ret;
}

long sum_squared(int n, int m)
{
    long ret = 0;
    for (int i = n; i <= m; i++)
        ret += i;
    return pow(ret, 2);
}
