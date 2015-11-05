nclude <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
	cabecera->ant = NULL;
	printf("Lista creada \n");
}

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;

	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	nuevo->sig = cabecera->sig;
	nuevo->ant = cabecera;

	if (cabecera->sig != NULL) {
		cabecera->sig->ant = nuevo;
		// La anterior linea es igual a las siguientes dos inscruciones
		// tmp = cabecera->sig;
		// tmp->ant = nuevo;
	}

	cabecera->sig = nuevo;
	printf("Datos insertados correctamente %d \n",nuevo->val);
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	/* Si es diferente de nulo borrar lista */
	if (cabecera->sig != NULL) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		/* Mientras el siguiente sea diferente de nulo */
		while ( actual->sig != NULL) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		cabecera->sig = NULL;
	}
	printf("Lista Eliminada \n");
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo){

    struct nodo *ultimo;
    struct nodo *nuevo;

    if(cabecera != NULL){
    ultimo=cabecera->sig;
    while(ultimo->sig != NULL){
        ultimo=ultimo->sig;
        //printf("Dato insertado %d \n" ,nuevo->val);
    }
    nuevo=(struct nodo*)malloc(sizeof(struct nodo)*1);
    nuevo->val=valor_nuevo;
    ultimo->sig=nuevo;
    }
}

void imprimir_lista(struct nodo *cabecera){
    struct nodo *nuevo;

    nuevo=cabecera->sig; //Punto de inicio del 1er elemento
    printf(" [ ");
    while(nuevo != NULL){
        printf("%d ",nuevo->val);
        nuevo=nuevo->sig;
    }
    printf(" ] \n");
}

void borrar(struct nodo *cabecera, int valor_borrar){

    struct nodo *actual;
    struct nodo *borrar;

    actual=cabecera;
    if(actual->sig != NULL){
        while(actual->sig->val != valor_borrar){
            actual=actual->sig;
        }
            borrar=actual->sig;
            actual->sig =borrar->sig;
            free(borrar);
    }
}

void insertar_despues_de(struct nodo *cabecera, int valor_nuevo, int valor_antes){
    struct nodo *ultimo;
    struct nodo *nuevo;

    while(cabecera != NULL){
    ultimo=cabecera->sig;
    if(ultimo->sig->val == valor_antes){
        ultimo=ultimo->sig;
        //printf("Dato insertado %d \n" ,nuevo->val);
    }
    nuevo=(struct nodo*)malloc(sizeof(struct nodo)*1);
    nuevo->val=valor_nuevo;
    ultimo->sig=nuevo;
    }

}

int main(){
    struct nodo *root = (struct nodo*) malloc(sizeof(struct nodo) * 1);
    inicializar(root);
    insertar_al_principio(root, 69);
    insertar_al_principio(root, 20);
    insertar_al_principio(root, 90);
    insertar_al_principio(root, 9);
    insertar_al_final(root,21);
    imprimir_lista(root);
    borrar(root,20);
    imprimir_lista(root);
    insertar_despues_de(root,70,69);
    imprimir_lista(root);
    borrar_lista(root);


return 0;
}
