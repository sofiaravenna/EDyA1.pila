#ifndef EDYA1_PILA_PILA_H
#define EDYA1_PILA_PILA_H

typedef struct nodo{
    int valor;
    struct nodo * sig;
}Nodo;

typedef struct pila{
    Nodo * top;
}Pila;

Nodo * newNodo(int num);
Pila * newPila();
void apilar(Pila * pila, Nodo * nodoApilar);
void desapilar(Pila * pila);
void print(Pila * pila);
#endif //EDYA1_PILA_PILA_H
