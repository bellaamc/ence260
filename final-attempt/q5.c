#include <stdint.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

uint32_t scanBase5()
{
    char c = '1';
    size_t i = 0;
    char number[6];
    while (isdigit(c) && i < 5) {
        c = getchar();
        if (isdigit(c)) {
            number[i] = c;
            i++;
        }
        
    }
    number[6] = '\0';
    size_t index = 0;
    uint32_t total = 0;
    while (index < i) {
        uint32_t num = number[index] - 48;
        total += (num * pow(5, i-index-1));
        index++;
    }
    return total;
}

int main()
{
    uint32_t y = scanBase5();
printf("%u\n", y);
}