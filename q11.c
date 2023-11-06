/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char codigoAcessoCorreto[] = "2005"; 
    char codigoInserido[10]; // 

    while (1) {
        printf("Digite o código de acesso: ");
        scanf("%s", codigoInserido);

        if (strcmp(codigoInserido, codigoAcessoCorreto) == 0) {
            printf("Acesso permitido. Bem-vindo!\n");
            break;
        } else {
            printf("Código de acesso incorreto. Tente novamente.\n");
        }
    }

    return 0;
}
