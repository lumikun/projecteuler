#include "problems.h"
#include "primes.h"
#include "sums.h"
#include "numman.h"

void print_problems(void)
{
    problem_1();
    problem_2();
    problem_3();
    problem_4();
    problem_5();
    problem_6();
    problem_7();
    problem_8();
    problem_9();
    problem_10();
}

void problem_10(void)
{
    clock_t begin = clock();
    int* primes = e_sieve(2000000);
    int ans = 0;
    for (size_t i = 0; i < 2000000; i++)
        if (!primes[i])
            ans += i;
    printf("ans: %d\n", ans);
    free(primes);
    clock_t end = clock();
    print_time(begin, end);
}

void problem_9(void)
{
    clock_t begin = clock();
    printf("STUB\n");
    clock_t end = clock();
    print_time(begin, end);
}

void problem_8(void)
{
    clock_t begin = clock();
    printf("STUB\n");
    clock_t end = clock();
    print_time(begin, end);
}

void problem_7(void)
{
    clock_t begin = clock();
    printf("STUB\n");
    clock_t end = clock();
    print_time(begin, end);
}

void problem_6(void)
{
    clock_t begin = clock();
    printf("ans: %ld\n", difference(1, 100));
    clock_t end = clock();
    print_time(begin, end);
}


void problem_5(void)
{
    clock_t begin = clock();
    printf("ans: %ld\n", even_divisible(20));
    clock_t end = clock();
    print_time(begin, end);
}

void problem_4(void)
{
    clock_t begin = clock();
    int ans = 0;
    for (int i = 999; i >= 900; i--)
        for (int j = 999; j >= 900; j--)
            if ((j * i) == reverse(j * i)) {
                ans = i * j;
                break;
            }
    printf("ans: %d\n", ans);
    clock_t end = clock();
    print_time(begin, end);
}

void problem_3(void)
{
    clock_t begin = clock();
    prime_factors(600851475143);
    clock_t end = clock();
    print_time(begin, end);
}

void problem_2(void)
{
    clock_t begin = clock();
    printf("ans: %d\n", even_fib_sum(4000000));
    clock_t end = clock();
    print_time(begin, end);
}

void problem_1(void)
{
    clock_t begin = clock();
    int ans = 0;
    for (int i = 0; i < 1000; i++)
        ans += i % 3 == 0 || i % 5 == 0 ? i : 0;
    printf("ans: %d\n", ans);
    clock_t end = clock();
    print_time(begin, end);
}

void print_time(clock_t begin, clock_t end)
{
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("This Solution Took %f seconds to execute.\n\n", time_spent);
}
