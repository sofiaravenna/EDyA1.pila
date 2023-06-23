#include <stdio.h>
#include <malloc.h>
#include "pila.h"

Nodo *newNodo(int num) {
    Nodo * aux = NULL;
    aux=malloc(sizeof(Nodo));
    if(aux == NULL){
        printf("ERROR al asignar memoria\n");
        exit(-1);
    } else{
        aux->valor= num;
        aux->sig=NULL;
    }
    return aux;
}

Pila *newPila() {
    Pila * aux = NULL;
    aux=malloc(sizeof (Pila));
    if(aux == NULL){
        printf("ERROR al asignar memoria\n");
        exit(-1);
    } else{
        aux->top=NULL;
    }
    return aux;
}

void apilar(Pila *pila, Nodo *nodoApilar) {
    if(pila->top == NULL){
        pila->top= nodoApilar;
    } else{
        nodoApilar->sig=pila->top;
        pila->top=nodoApilar;
    }
}

void desapilar(Pila *pila) {
    if(pila->top==NULL){
        printf("La pila esta vacia.\n");
        return;
    }
    Nodo *aux= pila->top;
    pila->top= pila->top->sig;
    free(aux);
}

void print(Pila *pila) {
    Nodo *aux= pila->top;
    while(aux != NULL){
        printf("%d\n",aux->valor);
        aux= aux->sig;
    }
}
