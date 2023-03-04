#include <stdio.h>

int main(){
    short arr[5] = {91,28,73,46,55};
    short *apArr;
    apArr = arr;

    printf("*apArr = %i\n", *apArr);
    printf("*(apArr+1) = %i\n", *(apArr+1));
    printf("*(apArr+2) = %i\n", *(apArr+2));

    return 0;
}