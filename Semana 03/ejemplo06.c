//Ejemplo06 - 06.03.23
#include <stdio.h>

struct Punto{
    int x;
    int y;
};

int main(){
    struct Punto p1 = {10,20};
    struct Punto p2 = p1;

    if(p1 == p2){
        printf("p1 y p2 son lo mismo\n");
    }
    getchar();
    return 0;
}