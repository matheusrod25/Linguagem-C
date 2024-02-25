#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int vet[10];
    int i = 0, j = 0, digitado = 0, cont = 0, valor = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 10; i++)
      vet[i] = 0;
    for (i = 0; i < 10; i++)
      {  if (i == 0)
         {
             printf("Digite o %2dº número inteiro: ",i+1);
             scanf("%d",&vet[i]);
         }
         else
         {
             printf("Digite o %2dº número inteiro: ",i+1);
             scanf("%d",&valor);
             for (j = 0; j < cont; j++)
             {
                 if (valor != vet[j])
                   if (j == cont-1)
                      vet[i] = valor;
                   else
                     continue;
                 if (valor == vet[j])
                 {
                     digitado = 1;
                     while (digitado)
                     {
                         printf("Número repetido. Digite o %2dº número inteiro novamente: ",i+1);
                         scanf("%d",&valor);
                         for (j = 0; j < cont; j++)
                         {
                             if (valor == vet[j])
                               break;
                             if (valor != vet[j] && j == cont-1)
                             {
                                 digitado = 0;
                                 vet[i] = valor;
                                 break; } } } } } }
         cont++; }
    printf("\nVetor = { ");
    for (i = 0; i < 10; i++)
      {  if (i < 9)
          printf("%d, ",vet[i]);
         else
          printf("%d ",vet[i]);}
    printf("}\n");
    return 0; }

