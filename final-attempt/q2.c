#include <stdint.h>
#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if (c != 0) {
        float result = (-3 * a * -1 *b) / c;
        printf("%.4f\n",result);
    } else {
        printf("Division by zero!\n");
    }
}