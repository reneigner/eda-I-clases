//Ejemplo05 - 06.03.23
#include <stdio.h>

struct numero{
    float x;
};

int main(){
    struct numero n1, n2, n3;
    n1.x=4;
    n2.x=3;
    n3.x = (n1.x) + (n2.x);

    printf("%f\n", n3.x);

    return 0;
}