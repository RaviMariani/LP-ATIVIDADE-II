/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>

int main() {
    int escolha;

    printf("Escolha um idioma de preferência:\n");
    printf("1 - Inglês\n");
    printf("2 - Espanhol\n");
    printf("3 - Francês\n");

    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Welcome!\n");
            break;
        case 2:
            printf("¡Bienvenido!\n");
            break;
        case 3:
            printf("Accueillir!\n");
            break;
        default:
            printf("Escolha inválida.\n");
    }

    return 0;
}
