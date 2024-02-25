#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 100
int main()
  { int num = 7, i , j = 0;
    int vet[TAM];
    setlocale(LC_ALL,"");
    for(i = 0 ; i < TAM ; i++)  // verificar se tem lixo no vetor
      {  if (vet[i]!= 0)
           vet[i] = 0;}
    for (i = 0 ; i < TAM; i++)
      {  if (i % 7 != 0)
           {  vet[j] = i;
              j++; } }
    printf("Vetor = { ");
    for (i = 0; i < TAM; i++)
      {  if(vet[i] != 0)
           printf("%d ",vet[i]);  }
    printf("}\n");
    return 0; }
