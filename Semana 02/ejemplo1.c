//Ejemplo 1 27.02.23
#include <stdio.h>

void prueba() {
    int var = 20;

    //Declarar un apuntador
    int* apt;

    //El tipo de dato entre apt y var debe ser el mismo
    apt = &var;

    printf("Valor de apt=%p \n", apt);
    printf("Valor de var=%d \n", var);
    printf("Valor de *apt=%d \n", *apt);
}

int main(){
    prueba();
    return 0;
}