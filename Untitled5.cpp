#include <stdio.h>

int main() {
    const float PI = 3.14f;
    float radius = 5.0;

    float circumference, area;

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Bán kính c?a h?nh tr?n là: %.2f\n", radius);
    printf("Chu vi c?a h?nh tr?n là: %.2f\n", circumference);
    printf("Di?n tích c?a h?nh tr?n là: %.2f\n", area);

    return 0;
}
