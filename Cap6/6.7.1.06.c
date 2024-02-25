#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int lista[10], pares, i;
    setlocale(LC_ALL,"");
    for(i = 0; i < 10; i++)
      { printf("Digite o %2dº número inteiro: ",i+1);
        scanf("%d",&lista[i]);
        if (lista[i] % 2 == 0)
            pares++; }
    printf("\nNúmeros pares armazenados: %d\n",pares);
    return 0; }

