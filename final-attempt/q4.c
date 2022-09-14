#include <stdint.h>
#include <stdio.h>

size_t stringLength(char* string)
{
    size_t i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int main()
{
    printf("%zu\n", stringLength("ABC"));
}