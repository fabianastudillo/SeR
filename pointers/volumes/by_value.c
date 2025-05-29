#include <stdio.h>

// Declaración de la función suma
int suma(int a, int b);

// Definición de la función suma
int suma(int a, int b) {
    int c = a + b;
    return c;
}


int main() {
    int num1 = 5;
    int num2 = 7;

    // Llamada a la función suma
    int resultado = suma(num1, num2);

    // Imprimir el resultado
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);

    return 0;
}

