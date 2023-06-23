#include <stdio.h>
#include "pila.h"

int main() {
    Pila * pila = newPila();

    apilar(pila, newNodo(1));
    apilar(pila, newNodo(2));
    apilar(pila, newNodo(3));
    print(pila);
    printf("\n");
    desapilar(pila);
    print(pila);
    return 0;
}
