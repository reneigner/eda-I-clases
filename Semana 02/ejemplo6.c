//Ejemplo 6 01.03.23 apuntadores en arreglos

#include <stdio.h>

void prueba(){
    int arr[3] = {5, 10, 15};

    int* apt;

    apt = arr;

    printf("Los elementos del arreglo son:");

    printf("%d, %d, %d\n",apt[0],apt[1],apt[2]);

    return;
}

int main(){
    prueba();
    return 0;
}