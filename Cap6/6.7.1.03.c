#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define N 5
int main()
  { const int N = 5;
    int lista[N], i;
    float media = 0.0, soma = 0.0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 5; i++)
      {  printf("Digite o %dº número inteiro: ",i+1);
         scanf("%d",&lista[i]);
         soma += lista[i]; }
    i = 0;
    media = soma / N;
    printf("\nOs valores lidos foram: ");
    do
    {  if (i == 4)
         printf("%d",lista[i]);
       else
         { if(i < 3)
            printf("%d, ",lista[i]);
           else
            printf("%d e ",lista[i]);}
       i++;
    } while (i < N);
    printf("\nA média dos %d valores digitados é %.2f\n",N,media);
    return 0; }
