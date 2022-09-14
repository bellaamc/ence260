#include <stdint.h>
#include <stdio.h>

int16_t addOdd(const int16_t data[], size_t n) 
{
    size_t i = 0;
    int16_t sum = 0;
    while (i < n) {
        if ((i % 2) == 1) {
            sum += data[i];
        }
        i++;
    }
    return sum;
}

int main()
{
    int16_t data[4] = {1, 2, 3, 4};
printf("%d\n", addOdd(data, 4));
}