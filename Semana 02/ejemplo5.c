//Ejemplo 5 01.03.23 Aritmetica de Apuntadores
#include <stdio.h>

int main(){
    int arr[3]={10, 100, 200};

    int* apt;

    apt = arr;

    for(int i = 0; i < 3; i++){
        printf("Valor de *apt= %d\n", *apt);

        printf("Valor de apt= %p\n\n", apt);

        apt++;
    }

    return 0;
}