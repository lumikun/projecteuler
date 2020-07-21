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
    problem_12();
    problem_13();
    problem_14();
    problem_15();
    problem_16();
    problem_17();
    problem_18();
    problem_19();
    problem_20();
}
// STUBS for the next 10 probems
void problem_20(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_19(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_18(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_17(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_16(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_15(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_14(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_13(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_12(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_11(void)
{
    clock_t begin = clock();
    clock_t end = clock();
    print_time(begin, end);
}

void problem_10(void)
{
    clock_t begin = clock();
    int* primes = e_sieve(2000000);
    int ans = 0;
    for (size_t i = 0; i < 2000000; i++)
        if (!primes[i])
            ans += i;
    printf("problem 10 ans: %d\n", ans);
    free(primes);
    clock_t end = clock();
    print_time(begin, end);
}

void problem_9(void)
{
    clock_t begin = clock();
    int c = 0;
    for (int i = 1; i < 1000; i++)
        for (int j = i + 1; j < 1000; j++) {
            c = 1000 - (i + j);
            if (check_pithagorus(i, j, c))
                if (i + j + c == 1000)
                    printf("problem 9 ans: %d\n", i * j * c);
        }
    clock_t end = clock();
    print_time(begin, end);
}

void problem_8(void)
{
    clock_t begin = clock();
    char number_array[] =   "73167176531330624919225119674426574742355349194934"
        "96983520312774506326239578318016984801869478851843"
        "85861560789112949495459501737958331952853208805511"
        "12540698747158523863050715693290963295227443043557"
        "66896648950445244523161731856403098711121722383113"
        "62229893423380308135336276614282806444486645238749"
        "30358907296290491560440772390713810515859307960866"
        "70172427121883998797908792274921901699720888093776"
        "65727333001053367881220235421809751254540594752243"
        "52584907711670556013604839586446706324415722155397"
        "53697817977846174064955149290862569321978468622482"
        "83972241375657056057490261407972968652414535100474"
        "82166370484403199890008895243450658541227588666881"
        "16427171479924442928230863465674813919123162824586"
        "17866458359124566529476545682848912883142607690042"
        "24219022671055626321111109370544217506941658960408"
        "07198403850962455444362981230987879927244284909188"
        "84580156166097919133875499200524063689912560717606"
        "05886116467109405077541002256983155200055935729725"
        "71636269561882670428252483600823257530420752963450";
    printf("problem 8 ans: %llu\n", product_array(number_array));
    clock_t end = clock();
    print_time(begin, end);
}

void problem_7(void)
{
    clock_t begin = clock();
    printf("problem 7 ans: %lu\n", find_prime(10001));
    clock_t end = clock();
    print_time(begin, end);
}

void problem_6(void)
{
    clock_t begin = clock();
    printf("problem 6 ans: %ld\n", difference(1, 100));
    clock_t end = clock();
    print_time(begin, end);
}


void problem_5(void)
{
    clock_t begin = clock();
    printf("problem 5 ans: %ld\n", even_divisible(20));
    clock_t end = clock();
    print_time(begin, end);
}

// TODO fix problem_4(), seams to give an incorrect ans
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
    printf("problem 4 ans: %d\n", ans);
    clock_t end = clock();
    print_time(begin, end);
}

// TODO need to improve this to only give out the answer, instead of array of prime factors
void problem_3(void)
{
    clock_t begin = clock();
    prime_factors(600851475143);
    printf("problem 3\n");
    clock_t end = clock();
    print_time(begin, end);
}

void problem_2(void)
{
    clock_t begin = clock();
    printf("problem 2 ans: %d\n", even_fib_sum(4000000));
    clock_t end = clock();
    print_time(begin, end);
}

void problem_1(void)
{
    clock_t begin = clock();
    int ans = 0;
    for (int i = 0; i < 1000; i++)
        ans += i % 3 == 0 || i % 5 == 0 ? i : 0;
    printf("problem 1 ans: %d\n", ans);
    clock_t end = clock();
    print_time(begin, end);
}

void print_time(clock_t begin, clock_t end)
{
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("This Solution Took %f seconds to execute.\n\n", time_spent);
}
