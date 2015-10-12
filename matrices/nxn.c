#include <stdio.h>
#include <stdlib.h>

int main() {
    int renglones;
    int columnas;
    int **matriz;
    int i;
    int ii;
    int **matriz2;
    int renglones2;
    int columnas2;
    
    //Primera Matriz
    printf("Numero de renglones: ");
    scanf("%d", &renglones);
    
    printf("Numero de columnas: ");
    scanf("%d", &columnas);
    
    matriz=(int**)malloc(sizeof(int*)*renglones);
    
    for (i=1; i<=renglones;i++){
        matriz[i]=(int*)malloc(sizeof(int)*columnas);
    }

        for(i=1;i<=renglones;i++){
            for(ii=1;ii<=columnas;ii++){
                 printf("Introducir valor de [%d][%d]: ",i,ii);
                scanf("%d",&matriz[i][ii]);
            }
        }
    
    //Segunda Matriz
    printf("Numero de renglones: ");
    scanf("%d", &renglones2);
    
    printf("Numero de columnas: ");
    scanf("%d", &columnas2);
    
    matriz2=(int**)malloc(sizeof(int*)*renglones2);
    
    for (i=1; i<=renglones2;i++){
        matriz2[i]=(int*)malloc(sizeof(int)*columnas2);
    }

        for(i=1;i<=renglones2;i++){
            for(ii=1;ii<=columnas2;ii++){
                 printf("Introducir valor de [%d][%d]: ",i,ii);
                scanf("%d",&matriz2[i][ii]);
            }
        }
    
    free(matriz);
    free(matriz2);
      
    return (0);
}
