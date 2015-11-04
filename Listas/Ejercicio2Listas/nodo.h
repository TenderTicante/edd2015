fndef _NODO_H_
#define _NODO_H_

struct nodo {
    // 2 atributos (valor y un puntero de su misma clase)
	/* Valor del Nodo */
	int val;
	/* Puntero que "apunta" al siguiente nodo */
	struct	nodo * sig;
};

#endif
