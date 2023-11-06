/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int options;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configurações\n");
    printf("Escolha uma opção: ");
    scanf("%d", &options);

    switch (options) {
        case 1:
            printf("Opção escolhida: Novo jogo\n");
            // Coloque aqui a funcionalidade para iniciar um novo jogo
            break;
        case 2:
            printf("Opção escolhida: Carregar jogo\n");
            // Coloque aqui a funcionalidade para carregar um jogo
            break;
        case 3:
            printf("Opção escolhida: Configurações\n");
            // Coloque aqui a funcionalidade para acessar as configurações
            break;
        default:
            printf("Opção inválida. Escolha uma opção válida (1, 2 ou 3).\n");
    }

    return 0;
}

