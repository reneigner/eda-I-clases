//Ejemplo 1 22.02.23
#include <stdio.h>

int main(){
    int arr[4];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    for(int i = 0; i < 4; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}