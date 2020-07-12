#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long find_prime(unsigned target);

int main()
{
    clock_t begin = clock();
    printf("answer: %lu\n", find_prime(10001));
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("This solution took %f seconds.\n");
    return 0;
}

unsigned long find_prime(unsigned target)
{
    char *mm;
    unsigned zcount = 0;

    mm = calloc(1000000, sizeof *mm);
    for (int i = 2; i < 1000000; i++) {
        if (!mm[i]) {
            zcount++;
            if (zcount == target) {
                return i;
                break;
            }
            for (int j = i * 2; j < 1000000; j += i)
                mm[j] = 1;
        }
    }
    free(mm);
    return 0;
}
