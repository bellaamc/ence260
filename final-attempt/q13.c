#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint16_t* newCopy(void* array, size_t numElements)
{
    uint16_t* newArray = calloc(numElements, sizeof(array));
    size_t i = 0;
    while (i < numElements) {
        newArray[i] = *(uint16_t*)(array + (i * sizeof(uint16_t)));
        i++;
    }
    return newArray;
}

int main()
{
    uint16_t array[3] = {1, 2, 3};
uint16_t* copy = newCopy(array, 3);
array[1] = 4;
for (size_t i = 0; i < 3; i++) {
    printf("%u\n", copy[i]);
}
}