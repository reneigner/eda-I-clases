//Ejemplo 01 - 06.03.23
#include <stdio.h>

struct Punto {
    int x,y;
};

int main() {
    struct Punto p1 = {0,1};

    printf("x = %d\n", p1.x);
    p1.x=10;
    printf("x = %d, y = %d\n", p1.x, p1.y);

    return 0;
}