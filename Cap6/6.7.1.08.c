#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
int main()
  { float lista[TAM], soma_positivos = 0;
    int i, qtd_negativos = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 10; i++)
       {  printf("Digite o %2dº número: ",i+1);
          scanf("%f",&lista[i]);
          if (lista[i] < 0)
            qtd_negativos++;
          else
            soma_positivos+= lista[i]; }
    printf("\nQuantidade de números negativos: %d\nSoma dos positivos: %.2f\n",qtd_negativos,soma_positivos);
    return 0; }
