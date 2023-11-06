/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, i, primo = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Número não primo\n");
        return 0;
    }

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("Número primo\n");
    else
        printf("Número não primo\n");

    return 0;
}
