#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
int main()
  { int X[TAM], i, menor, maior;
    setlocale(LC_ALL,"");
    for (i = 0; i < TAM; i++)
       {  printf("Digite o %d� n�mero inteiro: ",i+1);
          scanf("%d",&X[i]);
          if (i == 0)
          {   menor = X[i];
              maior = X[i]; }
          else
          {   if (X[i] < menor)
                 menor = X[i];
              if (X[i] > maior)
                 maior = X[i]; } }
    printf("\nO maior n�mero � %d\nO menor n�mero � %d\n",maior,menor);
    return 0; }

