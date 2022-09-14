/* 
 * Program: Cities
 * Version Hash # 22138011818542395655
 */

#include <stdio.h>
#include <stdint.h>


typedef struct {
    char* name;
    float latitude, longitude;
} City_t;



int main(void)
{
    City_t mycity = {"Christchurch", -43.532, 172.636};
    printf("City: %s (lat %.2f, long %.2f)\n", mycity.name, mycity.latitude, mycity.longitude);
}
