int main() {
    char str[1000];
    int words = 0, vowels = 0, consonants = 0, spaces = 0, special = 0, i;
    printf("Enter a string: ");
    fgets(str, 1000, stdin); 
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isspace(str[i])) {
            spaces++;
        } else if (ispunct(str[i])) {
            special++;
        }
    }
    words = spaces + 1;
    printf("Words = %d\n", words-1);
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Space = %d\n", spaces-1);
    printf("Special Characters = %d\n", special);

    return 0;
}
