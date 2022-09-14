#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

void findInArray(uint16_t* array, size_t n, uint16_t value, uint16_t** foundValueDest)
{
    bool isIn = false;
    size_t i = 0;
    while (i < n) {
        if (array[i] == value && !isIn) {
            *foundValueDest = &array[i];
            isIn = true;
        }
        i++;
    }
    if (!isIn) {
        *foundValueDest = NULL;
    }
}

int main()
{
uint16_t array[3] = {5, 10, 15};
uint16_t* foundValue = &array[0]; //Valid non-NULL address
findInArray(array, 3, 100, &foundValue);
if (foundValue == NULL) {
    puts("Value not found");
}
}