#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
  { float desvio_padrao = 0.0 , media = 0.0, soma = 0.0, S = 0.0;
    float vet[10];
    int i;
    setlocale(LC_ALL,"");
    for (i = 0; i < 10; i++)
        vet[i] = 0.0;
    for (i = 0; i < 10; i++)
      {  printf("Digite o %2dº valor: ",i+1);
         scanf("%f",&vet[i]);
         soma += vet[i];}
    media = soma/10.0;
    for (i = 0; i < 10; i++)
        S += (pow((vet[i] - media),2));
    desvio_padrao = sqrt((S/9));
    printf("\nDesvio-padrão amostral = %.3f\n",desvio_padrao);
    return 0; }

