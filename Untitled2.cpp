#include <stdio.h>
int main() {
    int a = 5;
    int b = 10;

    int sum, difference, product, quotient;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("T?ng c?a %d và %d là: %d\n", a, b, sum);
    printf("Hi?u c?a %d và %d là: %d\n", a, b, difference);
    printf("Tích c?a %d và %d là: %d\n", a, b, product);
    printf("Thýõng c?a %d và %d là: %d\n", a, b, quotient);

    return 0;
}
