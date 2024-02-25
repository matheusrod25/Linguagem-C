#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { float vet[10];
    int i = 0, j = 0, menor = 0, maior = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 10; i++)
        vet[i] = 0;
    for (i = 0; i < 10; i++)
      {  printf("Digite o %2dº número: ",i+1);
         scanf("%f",&vet[i]); }
    return 0; }

