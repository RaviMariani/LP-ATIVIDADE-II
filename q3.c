/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
   float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        printf("Excelente.\n");
    } else if (nota >= 7.0 && nota < 9.0) {
        printf("Bom.\n");
    } else if (nota >= 5.0 && nota < 7.0) {
        printf("Razoável.\n");
    } else {
        printf("Insuficiente.\n");
    }



    return 0;
}