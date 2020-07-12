#include <stdio.h>
#include <time.h>

int reverse(int n);



int main()
{
    clock_t begin = clock();
    int ret = 0;
    for (int i = 999; i >= 900; i--) {
        for (int j = 999; j >= 900; j--) {
            if ((j * i) == reverse(j * i))
                if (reverse(j * i) > ret)
                    ret = i * j;
        }
    }
    printf("Palindrome: %d\n", ret);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The solution took %f seconds.\n", time_spent);
    return 0;
}

int reverse(int n)
{
    int ret = 0;
    while (n != 0) {
        ret = ret * 10;
        ret = ret + n % 10;
        n = n / 10;
    }
    return ret;
}
