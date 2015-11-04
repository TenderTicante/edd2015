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

void insertar_despues_de(struct nodo *cabecera, int valor_nuevo, int valor_antes){
    struct nodo *actual;
    actual = cabecera;
    struct nodo *padre = NULL;
    struct nodo *hijo = NULL;
    struct nodo *nuevo = NULL;
    bool seguir = true;

    if(actual != NULL){
        while(seguir){
            actual= actual->sig;
            if(actual->val == valor_antes){
                seguir = false;
                break;
            }
            if( actual->sig == NULL){
                seguir = false;
                 printf("\n NO se encontro Nodo");
            }
        }

        padre = actual;
        nuevo=(struct nodo*) malloc(sizeof(struct nodo) * 1);
        nuevo->val=valor_nuevo;
        nuevo->sig= NULL;
        if(padre->sig != NULL){
            hijo = padre->sig;
            padre->sig = nuevo;
            nuevo->sig = hijo;
        }
        else{
            padre->sig = nuevo;
        }
     }
}

void eliminar_elemento(struct nodo *cabecera, int busqueda){
    struct nodo *actual;
    actual=cabecera;

    if (actual != NULL){
        while(true){
            actual=actual->sig;
            if(actual->val == busqueda){
            }
        }
    }

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
    int busqueda;

    printf("Ingreso de datos en la lista:\nCon -1 termina el ingreso de datos a la lista\n\n");

    while(true){
    printf("\nDato a ingresar :");
    scanf("%d",&dato);
        if(dato != -1){
            insertar_al_final(root,dato);
            //imprimir_lista(root);
        }
        else{
            printf("\nInserte numero a eliminar de la lista ? : ");
            scanf("%d",&busqueda);
            eliminar_elemento(root,busqueda);
            imprimir_lista(root);
            break;
        }
    }
        if(dato== -1){
        free(root);
        borrar_lista(root);
        imprimir_lista(root);
        }
    return 0;
}
