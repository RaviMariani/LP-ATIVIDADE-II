/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    printf("Contagem regressiva a partir de %d:\n", numero);

    while (numero >= 0) {
        switch (numero) {
            case 0:
                printf("Zero\n");
                break;
            case 1:
                printf("Um\n");
                break;
            case 2:
                printf("Dois\n");
                break;
            case 3:
                printf("Três\n");
                break;
            default:
                printf("%d\n", numero);
        }

        numero--;
    }

    return 0;
}
