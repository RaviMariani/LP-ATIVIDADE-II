/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
    float valor;
    char u;
    bool f;

    printf("Digite o valor da compra em R$: ");
    scanf("%f", &valor);

    printf("Digite o dia da semana (U para dias Uteis(de semana) ou F para fim de semana: \n");
    scanf(" %c", &u);

    f = (u == 'S' || u == 's');

    if (valor > 100.0) {
        float desconto;
        if (f) {
            desconto = valor * 0.15;
        } else {
            desconto = valor * 0.10;
        }

        printf("Desconto aplicado: %.2f R$\n", desconto);

        // Calcula o valor total após o desconto
        float valorTotal = valor - desconto;
        printf("Valor total após o desconto: %.2f R$\n", valorTotal);
    } else {
        printf("Sem desconto aplicado. Valor total: %.2f R$\n", valor);
    }

    return 0;
}