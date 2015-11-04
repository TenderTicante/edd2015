#include "operaciones.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include <stdlib.h>

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
}

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;

	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	nuevo->sig = cabecera->sig;
	cabecera->sig = nuevo;
}

void insertar_al_final(struct nodo *cabecera, int valor){
    struct nodo *nuevo;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	struct nodo *actual;
	actual = (struct nodo*) malloc(sizeof(struct nodo) * 1);

    nuevo->val = valor;//nodo.val
    nuevo->sig= NULL;

    if(cabecera != NULL){
    actual=cabecera;

    while(actual->sig != NULL)
        actual = actual->sig;
    }

    actual->sig = nuevo;
}

void imprimir_lista(struct nodo *cabecera){
    struct nodo *actual;
    if(cabecera != NULL){
        actual = cabecera->sig;
        while(actual != NULL){
            printf("\nDato insertado: %d ", actual->val);
            actual= actual->sig;

        }

    }
}

void eliminar_elemento(struct nodo *cabecera,int buscando){
    struct nodo *borrar;
    struct nodo *actual;

    actual=cabecera;
    if(actual->sig != NULL){
    while (actual->sig->val != buscando){
        actual=actual->sig;
    }
            borrar = actual->sig;
            actual->sig = borrar->sig;
            free(borrar);
    }
}

 void borrar_lista(struct nodo *cabecera){

	struct nodo *actual;
	struct nodo *borrar;

	// Si es diferente de nulo borrar lista //
	if (cabecera->sig != NULL) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		// Mientras el siguiente sea diferente de nulo //
		while ( actual->sig != NULL) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		printf("\n Lista eliminada :D ");
		cabecera->sig = NULL;
	}
}


int main(){
    struct nodo *root = (struct nodo*) malloc(sizeof(struct nodo) * 1);
    inicializar(root);
    int dato;

    printf("Ingreso de datos en la lista:\nCon -1 termina el ingreso de datos a la lista\n\n");

    while(true){
    printf("\nDato a ingresar :");
    scanf("%d",&dato);
        if(dato != -1){
            insertar_al_final(root,dato);
            imprimir_lista(root);
        }
        else{
            break;
        }
    }
        if(dato== -1){
        free(root);
        imprimir_lista(root);
        }
    return 0;
}

