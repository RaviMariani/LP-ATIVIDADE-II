/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    
    int temp;

    printf("Informe a temperatura para definir a condição climática do jogo: ");
    scanf("%i", &temp);

    if (temp > 25) {
        printf("Está ensolarado.\n");
    } 
    else if (temp < 15) 
    {
        printf("Está chuvoso.\n");
    } else 
    {
        printf("Está nublado.\n");
    }


    return 0;
}