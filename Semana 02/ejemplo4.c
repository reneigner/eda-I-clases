//Ejemplo 4 27.02.23 punto 2.B.
#include <stdio.h>

int main(){
    int var = 10;

    int* apt = &var;

    printf("Valor de var=%d \n", *apt);

    printf("Direccion de var=%p \n", apt);

    *apt = 20;

    printf("Despues de asignacion en apt su valor es= %d\n", *apt);

    return 0;
}