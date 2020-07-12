#include <stdio.h>
#include <math.h>
#include <time.h>

long sum_of_squares(int n, int m);
long sum_squared(int n, int m);
long difference(long a, long b);

int main()
{
    clock_t begin = clock();
    printf("answer = %ld\n", difference(1, 100));
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The soultion took %f seconds.\n", time_spent);
    return 0;
}

long sum_of_squares(int n, int m)
{
    long ret = 0;
    for (int i = n; i <= m; i++)
        ret = ret + pow(i, 2);
    return ret;
}

long sum_squared(int n, int m)
{
    long ret = 0;
    for (int i = n; i <= m; i++)
        ret += i;
    return pow(ret, 2);
}

long difference(long a, long b)
{
    return (sum_squared(a, b) - sum_of_squares(a, b));
}
