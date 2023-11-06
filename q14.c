/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, contPares = 0, contImpares = 0;
    int somaPares = 0, somaImpares = 0;

    while (1) {
        printf("Digite um número inteiro (ou um valor negativo para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        if (numero % 2 == 0) {
            contPares++;
            somaPares += numero;
        } else {
            contImpares++;
            somaImpares += numero;
        }
    }

    if (contPares > 0) {
        float mediaPares = (float)somaPares / contPares;
        printf("Números pares: %d, Média dos números pares: %.2f\n", contPares, mediaPares);
    } else {
        printf("Nenhum número par foi inserido.\n");
    }

    if (contImpares > 0) {
        float mediaImpares = (float)somaImpares / contImpares;
        printf("Números ímpares: %d, Média dos números ímpares: %.2f\n", contImpares, mediaImpares);
    } else {
        printf("Nenhum número ímpar foi inserido.\n");
    }

    return 0;
}
