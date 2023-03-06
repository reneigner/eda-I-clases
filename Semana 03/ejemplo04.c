//Ejemplo04 - 06.03.23
#include <stdio.h>

struct Punto{
    int x,y;
};

int main(){
    struct Punto p1={1,2};
    struct Punto* p2=&p1;

    printf("Accediendo a valores miembro de p2\n%d %d\n",p2->x,p2->y);
    p2->x=10;
    printf("%d\n", p2->x);
    return 0;
}