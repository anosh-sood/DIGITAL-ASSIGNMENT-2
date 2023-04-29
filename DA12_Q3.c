#include <stdio.h>

int factorial(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main()
{
    int n, i;
    double sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double) factorial(i) / i;
    }

    printf("The sum of the series is %lf", sum);

    return 0;
}
