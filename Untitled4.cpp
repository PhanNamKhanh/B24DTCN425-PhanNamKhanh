#include <stdio.h>

int main() {
    float side = 4.0;

    float perimeter, area;

    perimeter = 4 * side;
    area = side * side;
    
    printf("C?nh c?a h?nh vu�ng l�: %.2f\n", side);
    printf("Chu vi c?a h?nh vu�ng l�: %.2f\n", perimeter);
    printf("Di?n t�ch c?a h?nh vu�ng l�: %.2f\n", area);

    return 0;
}
