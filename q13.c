/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int numero1, numero2;

  printf ("Digite o primeiro numero inteiro: ");
  scanf ("%d", &numero1);

  printf ("Digite o segundo numero inteiro: ");
  scanf ("%d", &numero2);

  if (numero1 == numero2)
    {
      printf ("Os dois numeros sao iguais: %d\n", numero1);
    }
  else if (numero1 > numero2)
    {
      printf
	("O primeiro numero %d é maior, e o segundo numero %d é menor.\n",
	 numero1, numero2);
    }
  else
    {
      printf
	("O segundo numero %d é maior, e o primeiro numero %d é menor.\n",
	 numero2, numero1);
    }

  return 0;
}
