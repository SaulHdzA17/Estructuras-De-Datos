#include<stdio.h>
#include<stdlib.h>

typedef struct Nodo {
    int valor;
    struct Nodo *siguiente;
} Nodo;

typedef struct Pila {
    int tamanio;
    struct Nodo *tope;
} Pila;

Pila crearPila() {
    Pila *pila1=(Pila*)malloc(sizeof(Nodo));
    pila1->tamanio=0;
    pila1->tope=NULL;
}

void insertar(Pila *pila1, int x) {
    if(pila1) {
        Nodo *nuevoNodo=(Nodo*)malloc(sizeof(Nodo));
        nuevoNodo->valor=x;
        nuevoNodo->siguiente=pila1->tope;
        pila1->tope=nuevoNodo;
        pila1->tamanio++;
    }
}

int eliminar(Pila *pila1) {
    if(pila1) {
        if(pila1->tamanio) {
            Nodo *auxiliar=pila1->tope;
            int valorDeRetorno=auxiliar->valor;
            pila1->tope=pila1->tope->siguiente;
            pila1->tamanio--;
            free(auxiliar);
            return valorDeRetorno;
        }
    }
}

int ultimoElemento(Pila pila1) {
    if(pila1.tamanio==0) {
        printf("La pila está vacía.");
        return -1;
    } else {
        return pila1.tope->valor;
    }
}
