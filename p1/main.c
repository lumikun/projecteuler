#include <stdio.h>
#include <time.h>

int main()
{
    clock_t begin = clock();
    int sum = 0;
    for (int i = 0; i < 1000; i++ )
        sum += i % 3 == 0 || i % 5 == 0 ? i : 0;
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Answer: %d\n", sum);
    printf("The solution took %f seconds.\n", time_spent);
    return 0;
}
