#include <stdio.h>
int power(int x, int n);
int main() {
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n (less than or equal to 5): ");
    scanf("%d", &n);

    printf("%d raised to the power %d is %d\n", x, n, power(x, n));

    return 0;
}
int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * power(x, n - 1);
    }
}
