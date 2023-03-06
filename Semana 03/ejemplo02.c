//Ejemplo02 - 06.03.23
#include <stdio.h>

struct Punto{
    int x,y,z;
};

int main(){
    struct Punto p1 = {.y=0,.z=1,.x=2};
    struct Punto p2 = {.x=20};

    printf("Punto p1, x=%d, y=%d, z=%d\n", p1.x, p1.y, p1.z);
    printf("Punto p2, x=%d\n", p2.x);

    return 0;
}