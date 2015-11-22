#include <stdio.h>
#include <stdlib.h>

int main() {
    int renglones;
    int columnas;
    int **matriz;
    int i;
    int ii;
    int j;
    int k;
    int **matriz2;
    int renglones2;
    int columnas2;
    int **matrizr;
    int renglonesr;
    int columnasr;
    
    //Primera Matriz
    printf("Introduzca la primera matriz a multiplicar:\n ");
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
    printf("Introduzca la segunda matriz a multiplicar:\n ");
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
    if(renglones!=columnas2){
        printf(" \n Operacion Imposible \n\n El numero de renglones es diferente al numero de columnas de la segunda matriz!!! \n");
        return(1);
        }
    else{
       
	 //Matriz resultado
        
        columnasr=columnas2;
        renglonesr=renglones;
        
        matrizr=(int**)malloc(sizeof(int*)*renglonesr);
        
        for(i=1; i<=renglonesr;i++){
            matrizr[i]=(int*)malloc(sizeof(int)*columnasr);
        }
        
        //Operacion de matrices
        for(i=1;i<=columnasr;i++){
            for(ii=1;ii<=renglonesr;ii++){
                for(j=1;j<=columnasr;j++){
                    matrizr[i][k]= 1;((matriz[i][k])*(matriz2[i][ii]))+((matriz[i][k])*(matriz2[k][ii]))+((matriz[i][k])*(matriz2[k][ii]));
                    printf("Matriz Resultado %d %d" ,matrizr[i][k]);
                }   
            }
        }
    }
        
    free(matriz);
    free(matriz2);
    free(matrizr);
      
    return (0);
}
