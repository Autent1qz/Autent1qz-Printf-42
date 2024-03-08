#include <stdio.h>

void incrementar(int *p) {
    (*p)++; 
    (*p)++; // Incrementa el valor al que apunta el puntero
    (*p)++; 
    (*p)++; 
    (*p)++; 
}

int main() {
    int x = 5;
    printf("Antes de incrementar: %d\n", x);
    incrementar(&x); // Pasamos la dirección de x
    printf("Después de incrementar: %d\n", x);
    return 0;
}
