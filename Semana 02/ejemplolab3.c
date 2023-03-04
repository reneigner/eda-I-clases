#include <stdio.h>

int main(){
    short arr[5], *apArr;
    apArr = &arr[0];

    printf("Direccion del arreglo en la primera posicion: %x\n", &arr[0]);
    printf("Direccion del arreglo: %x\n", &arr);
    printf("Direccion del apuntador: %x\n", apArr);

    return 0;
}