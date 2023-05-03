// Implementación de Selection sort
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // Límite de movimiento uno por uno del subarreglo no ordenado
    for (i = 0; i < n-1; i++)
    {
        // Se busca el elemento mínimo en un arreglo sin ordenar
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Intercambiar el elemento mínimo encontrado con el primer elemento
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}
 
/* Función para imprimir */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Función main
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Arreglo ordenado: \n");
    printArray(arr, n);
    return 0;
}