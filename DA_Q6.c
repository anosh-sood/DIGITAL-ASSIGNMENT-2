#include <stdio.h>
int main() {
    int num_count;
    int num;
    int sum = 0;
    int digit;
    printf("Enter the number of even numbers to be inputted:\n");
    scanf("%d", &num_count);
    printf("Enter the even numbers:\n");
    for (int i = 0; i < num_count; i++) {
        scanf("%d", &num);

        if (num % 2 == 0 && num >= 1000 && num <= 9998) {
            sum += num;
        } else {
            printf("Invalid even number! Please enter a four-digit even number.\n");
            i--;
        }
    }
    while (sum > 9) {
        digit = sum % 10;
        sum /= 10;
        sum += digit;
    }
    if (sum % 2 == 0) {
        printf("Even found\n");
    } else {
        printf("Odd found\n");
    }
    
    return 0;
}
