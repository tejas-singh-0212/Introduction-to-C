#include <stdio.h>
#include <math.h>
void main() {
    int num, o_num, remain, digits = 0;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    o_num = num;
    while (o_num != 0) {
        digits++;
        o_num /= 10;
    }
    o_num = num;
    while (o_num != 0) {
        remain = o_num % 10;
        sum += pow(remain, digits);
        o_num /= 10;
    }
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}