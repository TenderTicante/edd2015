#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo);//Hecho :D

void insertar_al_final(struct nodo *cabecera, int valor_nuevo);//Hecho

void imprimir_lista(struct nodo *cabecera);//Hecho :D

void borrar_lista(struct nodo *cabecera);//Hecho :D

void inicializar(struct nodo *cabecera);//Hecho :D

void insertar_despues_de(struct nodo *cabecera, int valor_nuevo, int valor_antes);
#endif