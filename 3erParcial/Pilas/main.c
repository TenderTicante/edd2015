#include <stdio.h>
#include <stdlib.h>

typedef struct{
	struct elemento* siguiente;
	int* dato;
} elemento;

elemento* ultimo = NULL;

void push(elemento* elemento){
	elemento->siguiente  = NULL;
	if(ultimo == NULL){
		ultimo = elemento;
	}
	else{
		elemento->siguiente=ultimo;
		ultimo = elemento;
	}
}

elemento* pop(){
	if(ultimo==NULL){
		return NULL;
	}
	elemento* elemento_retorno = ultimo;
	ultimo = elemento_retorno -> siguiente;
	return elemento_retorno;
}

void print(elemento* elemento){


	while(elemento != NULL){
		elemento=pop();
		printf("%d\n",elemento->dato);
	}

}

int main(void) {
	elemento* uno = malloc(sizeof(elemento));
	elemento* dos = malloc(sizeof(elemento));
	elemento* tres = malloc(sizeof(elemento));
	elemento* cuatro = malloc(sizeof(elemento));
	elemento* cinco = malloc(sizeof(elemento));

	uno->dato=69;
	dos->dato=70;
	tres->dato=71;
	cuatro->dato=72;
	cinco->dato=73;

	push(uno);
	push(dos);
	push(tres);
	push(cuatro);
	push(cinco);

	print(uno);
	print(dos);
	print(tres);
	print(cuatro);
	print(cinco);

	return EXIT_SUCCESS;
}
