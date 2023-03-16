#include <stdio.h>
#include <stdlib.h>
int main()
{
	int index = 0, i = 0, n,
		*marks;

	int ans;
	marks = (int*)malloc(sizeof(
		int)); 
	if (marks == NULL) {
		printf("Memoria no puede ser asignada.");
	}
	else {

		printf("Memoria asignada con exito "
			"usando malloc\n");
		printf("\n marks = %pc\n",
			marks); 

		do {
			printf("\n Ingresa calificaciones\n");
			scanf("%d", &marks[index]); 
			printf("¿Deseas agregar mas?(1/0): ");
			scanf("%d", &ans);

			if (ans == 1) {
				index++;
				marks = (int*)realloc(
					marks,
					(index + 1)
						* sizeof(
							int)); 
				if (marks == NULL) {
					printf("Memoria no puede ser asignada");
				}
				else {
					printf("Memoria asignada con exito "
						"reasignada usando realloc:\n");
					printf(
						"\n la direccion base de las calificaciones son:%pc",
						marks); 
				}
			}
		} while (ans == 1);

		for (i = 0; i <= index; i++) {
			printf("calificaciones de los estudiantes %d son: %d\n ", i,
				marks[i]);
		}
		free(marks);
	}
	return 0;
}