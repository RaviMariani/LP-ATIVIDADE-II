/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int quantidadeNotas;
  float nota, soma = 0.0, media;

  printf ("Digite a quantidade de notas: ");
  scanf ("%d", &quantidadeNotas);

  if (quantidadeNotas <= 0)
    {
      printf ("A quantidade de notas deve ser maior que zero.\n");
      return 1;
    }

  for (int i = 1; i <= quantidadeNotas; i++)
    {
      printf ("Digite a nota %d: ", i);
      scanf ("%f", &nota);
      soma += nota;
    }

  media = soma / quantidadeNotas;
  printf ("A mC)dia das notas C): %.2f\n", media);

  return 0;
}
