#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* ptr;
	int n, i;

	printf("Ingresa el numero de elementos:");
	scanf("%d",&n);
	printf("Numero de elementos ingresados: %d\n", n);

	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memoria no asignada.\n");
		exit(0);
	}
	else {

		printf("Memoria asignada con exito usando malloc.\n");

		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		printf("El numero de elementos del arreglo son: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}