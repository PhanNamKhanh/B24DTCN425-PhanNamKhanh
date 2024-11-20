#include <stdio.h>

int main() {
    // Khai b�o v� kh?i t?o bi?n ki?u int
    int a = 10;  // Bi?n a l�u tr? m?t gi� tr? s? nguy�n

    // Khai b�o v� kh?i t?o bi?n ki?u float
    float b = 2.37f;  // Bi?n b l�u tr? m?t gi� tr? s? th?c c� ph?n th?p ph�n

    // Khai b�o v� kh?i t?o bi?n ki?u double
    double c = 2.372006;  // Bi?n c l�u tr? m?t gi� tr? s? th?c v?i �? ch�nh x�c cao h�n float

    // Khai b�o v� kh?i t?o bi?n ki?u char
    char d = 'A';  // Bi?n d l�u tr? m?t k? t? (char)

    // Khai b�o v� kh?i t?o bi?n ki?u long
    long e = 123456789L;  // Bi?n e l�u tr? m?t gi� tr? s? nguy�n d�i

    // Khai b�o v� kh?i t?o bi?n ki?u short
    short f = 12345;  // Bi?n f l�u tr? m?t gi� tr? s? nguy�n ng?n

    // Khai b�o v� kh?i t?o bi?n ki?u unsigned int
    unsigned int g = 4294967295;  // Bi?n g l�u tr? m?t gi� tr? s? nguy�n kh�ng d?u

    // In ra c�c gi� tr? c?a c�c bi?n
    printf("int a = %d\n", a);
    printf("float b = %.2f\n", b);
    printf("double c = %.10f\n", c);
    printf("char d = %c\n", d);
    printf("long e = %ld\n", e);
    printf("short f = %d\n", f);
    printf("unsigned int g = %u\n", g);

    return 0;
}


