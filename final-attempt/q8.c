#include <stdint.h>
#include <stdio.h>

size_t myIndex(int32_t arr[], int32_t* element)
{
    return element-arr;
}

int main()
{
    int32_t data[30];
int32_t* p = &data[17];
printf("Index is %zu\n", myIndex(data, p));
}