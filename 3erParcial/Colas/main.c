 //Sometimes everything is easy //
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	struct elemento *siguiente;
	int* dato;
	
}elemento;

elemento *primero = NULL;
elemento *ultimo = NULL;


void agregar(elemento* elemento){
	
	elemento -> siguiente = NULL;
	//Comprobacion de fila vacia
	if(primero = NULL){
		primero = elemento;;
		ultimo = elemento;
	}
	
	else{
		ultimo-> siguiente = elemento;
		ultimo = elemento;	
	}
}

elemento* extraer (void){
	
	elemento* elemento_retorno = primero;
	primero = primero -> siguiente;
	return elemento_retorno;
}





int main(void) {
	elemento* uno= malloc(sizeof(elemento));
	elemento* dos= malloc(sizeof(elemento));
	elemento* tres= malloc(sizeof(elemento));
	
	uno->dato="69";
	dos->dato= "70";
	tres-> dato= "71";
	
	agregar(uno);
	agregar(dos);
	agregar(tres);

	return EXIT_SUCCESS;
}
