fndef _NODO_H_
#define _NODO_H_

struct nodo {
	/* Valor del Nodo */
	int val;
	/* Puntero que "apunta" al siguiente nodo */
	struct	nodo * sig;
	/* Puntero que "apunta" al nodo anterior */
	struct	nodo * ant;
};
