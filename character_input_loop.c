#include <stdio.h>

void main() {
    char ch;
    int vowel_count = 0, digit_count = 0;
    while (1) {
        printf("Enter characters (enter a special character to stop): ");
        scanf(" %c", &ch);
        if ((ch < 'A' || (ch > 'Z' && ch < 'a') || ch > 'z') && (ch < '0' || ch > '9')) {
            break;
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        }
        if (ch >= '0' && ch <= '9') {
            digit_count++;
        }
    }    
    printf("Vowels: %d\n", vowel_count);
    printf("Digits: %d\n", digit_count);
}