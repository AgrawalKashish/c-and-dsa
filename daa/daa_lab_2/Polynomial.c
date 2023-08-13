#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

// Formula Approach
int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int binomial_coefficient(int n, int k)
{
    double result = 1;
    for (int i = 1; i <= k; i++)
    {
        result = result * (n - k + 1) / i;
    }
    return (int)result;
}

int calculate_S(int i)
{
    int sum = 0;
    for (int k = 1; k <= (i / 3); k++)
    {
        sum += power(-1, k) * power(3, i - 3 * k) * binomial_coefficient(i - 2 * k, k);
    }
    return sum + power(3, i);
}

int calculate_Formula(int n)
{
    int sum = 0;
    for (int i = 0; i <= n - 3; i++)
    {
        sum += calculate_S(i) * calculate_S(n - i - 3);
    }
    return sum;
}

int main()
{
    printf("Enter the length of the string you want: ");
    int length;
    scanf("%d", &length);

    // allocating string space
    char *str = (char *)malloc((length + 1) * sizeof(char));
    clock_t c1, c2;
    // Formula  code
    c1 = clock();
    int count_formula = calculate_Formula(length);
    printf("The number string containing xyz exactly once is: %d\n", count_formula);
    c2 = clock();

    double execTimeFormula = (double)(c2 - c1) / (double)(CLOCKS_PER_SEC);
    printf("Execution time for the Formula method solution is: %lf\n", execTimeFormula);

    free(str);
    return 0;
}
