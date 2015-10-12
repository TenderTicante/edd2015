#include <stdio.h>
#include <stdlib.h>

int main()
{
	int renglones;
        int columnas;
	int **matriz;
	int i;

	printf("Numero de renglones: ");
	scanf("%d", &renglones);
        
        printf("Numero de columnas: ");
	scanf("%d", &columnas);

	// Reserva el tamaño en bytes
	matriz = (int **) malloc(sizeof(double*)*renglones);

	for (i= 0; i<renglones;i++) {
		matriz[i]= (double*)malloc(sizeof(double)*columnas);
                
                }

	/*printf("El arreglo es: ");
	for (contador = 0; contador < renglones; contador++) {
		matriz[contador] = contador + 1;
                
                for(contador2=0; contador < columnas; contador2++){
                    matriz[contador2]=contador+1;
                }
	}
	printf("\n");
        */
	free(matriz);
	return 0;
}
