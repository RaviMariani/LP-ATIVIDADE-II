/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("Digite a operação desejada (+ ou -): ");
    scanf(" %c", &operacao); 
    
    
    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Operação inválida\n");
    }

    return 0;
}
