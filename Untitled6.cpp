#include <stdio.h>

int main() {
    const float PI = 3.14f;
    float radius = 5.0;

    float circumference, area;

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("B�n k�nh c?a h?nh tr?n l�: %.2f\n", radius);
    printf("Chu vi c?a h?nh tr?n l�: %.2f\n", circumference);
    printf("Di?n t�ch c?a h?nh tr?n l�: %.2f\n", area);

    return 0;
}
