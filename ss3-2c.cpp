#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhập nhiệt độ (°C): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Nhiệt độ tương ứng (°F): %.2f\n", fahrenheit);

    return 0;
}
