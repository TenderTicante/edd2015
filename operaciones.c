#include "operaciones.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
	cabecera->ant = NULL;
}

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;

	nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	nuevo->sig = cabecera->sig;
	nuevo->ant = cabecera;

	if(cabecera->sig != NULL) {
		cabecera->sig->ant = nuevo;
		// La anterior linea es igual a las siguientes dos inscruciones
		// tmp = cabecera->sig;
		// tmp->ant = nuevo;
	}

	cabecera->sig = nuevo;
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	struct nodo *actual;
	
	nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	actual = cabecera->sig;
	if(actual != NULL) {
		while (actual->sig != NULL) {
			actual = actual->sig;
		}
		actual->sig = nuevo;
		nuevo->ant = actual;
		nuevo->sig = NULL;
	}

	else {
		cabecera->sig = nuevo;
		nuevo->ant = cabecera;
		nuevo->sig = NULL;
	}
}

void insertar_despues_de(struct nodo *cabecera, int valor_nuevo, int valor_antes)
{
	struct nodo *nuevo;
	struct nodo *actual;
	
	nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	actual = cabecera->sig;
	
	if(actual != NULL) {
		while (actual->sig != NULL) {
			if(actual->val == valor_antes) {
				nuevo->sig = actual->sig;
				nuevo->ant = actual->sig->ant;
				actual->sig = nuevo;
				nuevo->sig->ant = nuevo;
			}
		actual = actual->sig;
		}
		
	}

	else {
		if(actual->val == valor_antes) {
				actual->sig = nuevo;
				nuevo->ant = actual;
				nuevo->sig = NULL;
		}
		
	}

	
}

void imprimir_lista(struct nodo *cabecera)
{
	struct nodo *actual;

	actual = cabecera->sig;

	while(actual != NULL) {
		printf("%d\n", actual->val);
		actual = actual->sig;
	}
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	/* Si es diferente de nulo borrar lista */
	if (cabecera->sig != NULL){
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
}

void borrar(struct nodo *cabecera, int valor_borrar)
{
	struct nodo *actual;
	struct nodo *borrar;

	actual = cabecera->sig;
	borrar = cabecera->sig;
	
	if(actual != NULL) {
		while(actual->sig != NULL) {
			if(actual->val == valor_borrar) {
				actual->ant->sig = actual->sig;
				actual->sig->ant = actual->ant;
				free(borrar);
			}
		actual = actual->sig;
		borrar = borrar->sig;
		}
		
	}
}

int main()
{
	return 0;
}
