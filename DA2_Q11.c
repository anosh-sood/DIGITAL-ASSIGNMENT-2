#include <stdio.h>
int main() {
    char str[100];
    int uppercase = 0, lowercase = 0, digits = 0, whitespace = 0, special = 0;
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            whitespace++;
        } else {
            special++;
        }
    }
    printf("\n");
    printf("Uppercase: %d\n", uppercase);
    printf("Lowercase: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Whitespace: %d\n", whitespace);
    printf("Special: %d\n", special);
    return 0;
}
