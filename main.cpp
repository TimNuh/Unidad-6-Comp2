#include <stdio.h>

int main() {
    int n, respuesta,  suma = 0;

    while (1) {
        printf("Ingrese un numero entero positivo para obtener la suma de los primeros 'n' numeros pares: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Numero Invalido. Por favor, ingrese un numero entero positivo.\n");
            continue;
        }

        suma = 0;
        for (int i = 1; i <= n; i++) {
            suma += 2 * i;
            printf("Para n = %d, Suma = %d.\n", i, suma);
        }

        printf("\n¿Desea continuar? \n Si: Oprime 1, No: Oprime 2): \n");
        scanf("%d", &respuesta);

        if (respuesta == 0) {
            break;
        }
    }

    return 0;
}