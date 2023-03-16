#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* ptr;
	int n, i;

	n = 5;
	printf("Ingresa el numero de elementos: %d\n", n);

	ptr = (int*)calloc(n, sizeof(int));

	if (ptr == NULL) {
		printf("Memoria no asignada.\n");
		exit(0);
	}
	else {

		printf("Memoria asignada con exito usando calloc.\n");

		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		printf("Los elementos del arreglo son: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}

		n = 10;
		printf("\n\nIngresa la nueva longitud del arreglo: %d\n", n);

		ptr = realloc(ptr, n * sizeof(int));

		printf("Memoria re-asignada con exito usando realloc.\n");

		for (i = 5; i < n; ++i) {
			ptr[i] = i + 1;
		}

		printf("Los elementos del arreglo son: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}

		free(ptr);
	}

	return 0;
}