#include <stdio.h>
#include <time.h>

int even_fib_sum(int bound);

int main()
{
    clock_t begin = clock();
    int ans = even_fib_sum(4000000);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Answer: %d\n", ans);
    printf("The solution took %f seconds.\n", time_spent);
    return 0;
}

int even_fib_sum(int bound)
{
    if (bound < 2)
        return 0;

    int ef1 = 0, ef2 = 2;
    int sum = ef1 + ef2;

    while (ef2 <= bound) {
        int ef3 = 4 * ef2 + ef1;
        if (ef3 > bound)
            break;
        ef1 = ef2;
        ef2 = ef3;
        sum +=ef2;
    }
    return sum;
}
