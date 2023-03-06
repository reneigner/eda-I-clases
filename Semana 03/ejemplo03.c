//Ejemplo03 - 06.03.23
#include <stdio.h>

struct Punto{
    int x,y;
};

int main() {
    struct Punto arr[10];

    arr[0].x=10;
    arr[0].y=20;

    printf("Impresion de elementos de arreglo\n %d %d\n", arr[0].x, arr[0].y);
    return 0;
}