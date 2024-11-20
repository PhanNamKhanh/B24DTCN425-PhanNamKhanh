#include <stdio.h>

int main() {
    // Khai báo và kh?i t?o bi?n ki?u int
    int a = 10;  // Bi?n a lýu tr? m?t giá tr? s? nguyên

    // Khai báo và kh?i t?o bi?n ki?u float
    float b = 2.37f;  // Bi?n b lýu tr? m?t giá tr? s? th?c có ph?n th?p phân

    // Khai báo và kh?i t?o bi?n ki?u double
    double c = 2.372006;  // Bi?n c lýu tr? m?t giá tr? s? th?c v?i ð? chính xác cao hõn float

    // Khai báo và kh?i t?o bi?n ki?u char
    char d = 'A';  // Bi?n d lýu tr? m?t k? t? (char)

    // Khai báo và kh?i t?o bi?n ki?u long
    long e = 123456789L;  // Bi?n e lýu tr? m?t giá tr? s? nguyên dài

    // Khai báo và kh?i t?o bi?n ki?u short
    short f = 12345;  // Bi?n f lýu tr? m?t giá tr? s? nguyên ng?n

    // Khai báo và kh?i t?o bi?n ki?u unsigned int
    unsigned int g = 4294967295;  // Bi?n g lýu tr? m?t giá tr? s? nguyên không d?u

    // In ra các giá tr? c?a các bi?n
    printf("int a = %d\n", a);
    printf("float b = %.2f\n", b);
    printf("double c = %.10f\n", c);
    printf("char d = %c\n", d);
    printf("long e = %ld\n", e);
    printf("short f = %d\n", f);
    printf("unsigned int g = %u\n", g);

    return 0;
}


