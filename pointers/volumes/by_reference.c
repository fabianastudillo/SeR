#include <stdio.h>

// Función suma que recibe punteros a enteros
int suma(int *a, int *b) {
    int c = *a + *b;
    *a = 10;
    *b = 11;
    return c;
}

int main() {
    int a = 5;
    int b = 7;

    int resultado = suma(&a, &b);

    printf("La suma de %d y %d es %d\n", a, b, resultado);

    return 0;
}
