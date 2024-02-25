#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define TAM 5
int main()
  { float num[TAM], quadrado[TAM];
    int i;
    setlocale(LC_ALL,"");
    for (i = 0; i < TAM; i++)
      {  printf("Digite o %dº número: ",i+1);
         scanf("%f",&num[i]);
         quadrado[i] = pow(num[i],2); }
    for (i = 0; i < TAM; i++)
        printf("\nValor = %.2f e seu quadrado = %.2f",num[i],quadrado[i]);
    printf("\n");
    return 0; }

