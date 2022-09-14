#include <stdint.h>
#include <stdio.h>

int64_t callPassedFunc(int64_t (*func)(int64_t), int64_t num)
{
    return (func)(num);
}

int main()
{
    int64_t func(int64_t x)
{
    return x/2; //Only an example - could be anything. 
}

// ...

int64_t arg = 10;
int64_t directRetVal = func(arg);
int64_t indirectRetVal = callPassedFunc(&func, arg);
printf("%d\n", directRetVal == indirectRetVal);
}