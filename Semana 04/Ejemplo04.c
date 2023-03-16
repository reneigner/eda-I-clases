#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ptr, *ptr1;
	int n, i;

	n = 5;
	printf("Ingresa el numero de elementos: %d\n", n);

	ptr = (int*)malloc(n * sizeof(int));

	ptr1 = (int*)calloc(n, sizeof(int));

	if (ptr == NULL || ptr1 == NULL) {
		printf("Memoria no asignada.\n");
		exit(0);
	}
	else {

		printf("Memoria asignada con exito usando malloc.\n");

		free(ptr);
		printf("Malloc memoria liberada(freed) con exito.\n");

		printf("\nMemoria asignada con exito usando calloc.\n");

		free(ptr1);
		printf("Calloc memoria liberada(freed) con exito.\n");
	}

	return 0;
}