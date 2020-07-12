#include <stdio.h>
#include <time.h>
#include <math.h>

int check_pithagorus(int a, int b, int c);

int main()
{
    clock_t begin = clock();
    int c = 0;
    for (int i = 1; i < 1000; i++){
        for (int j = i + 1; j < 1000; j++) {
            c = 1000 - (i + j);
            if (check_pithagorus(i, j, c))
                if (i + j + c == 1000)
                    printf("answer: %d\n", i * j * c);
        }
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("This solution took %f seconds.\n", time_spent);
    return 0;
}

int check_pithagorus(int a, int b, int c)
{
    return pow(a, 2) + pow(b, 2) == pow(c, 2);
}
