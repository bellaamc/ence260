#include <stdint.h>
#include <stdio.h>

typedef struct {
    int64_t x;
    int64_t y;
    int64_t z;
} Vector3d_t;

Vector3d_t vector(int64_t x, int64_t y, int64_t z)
{
    Vector3d_t newVector;
    newVector.x = x;
    newVector.y = y;
    newVector.z = z;
    return newVector;
}

Vector3d_t vectorMult(Vector3d_t a, int64_t s) 
{
    Vector3d_t newVector;
    newVector.x = s * a.x;
    newVector.y = s * a.y;
    newVector.z = s * a.z;
    return newVector;
}

int main()
{
    Vector3d_t v1 = vector(1, 4, -2);
Vector3d_t v2 = vectorMult(v1, 2);
printf("(%ld, %ld, %ld)\n", v2.x, v2.y, v2.z);
}