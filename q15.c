/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int escolha;
    float valor, resultado;

    while (1) {
        printf("Escolha a conversão desejada:\n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair\n");
        printf("Digite o número da opção: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            break;  
        }

        switch (escolha) {
            case 1:
                printf("Digite a distância em quilômetros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371f; 
                printf("%.2f quilômetros equivalem a %.2f milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9/5) + 32;  
                printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
