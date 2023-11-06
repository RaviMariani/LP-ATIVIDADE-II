/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int cProduto;
    float preco;

    printf("Digite o código do produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Calça\n");
    printf("3 - Sapato\n");

    scanf("%d", &cProduto);

    switch (cProduto) {
        case 1:
            printf("Produto selecionado: Camiseta\n");
            preco = 69.99;
            break;
        case 2:
            printf("Produto selecionado: Calça\n");
            preco = 129.99;
            break;
        case 3:
            printf("Produto selecionado: Sapato\n");
            preco = 299.99;
            break;
        default:
            printf("Código de produto inválido.\n");
            return 1;
    }

    printf("Preço: R$%.2f\n", preco);

    return 0;
}

