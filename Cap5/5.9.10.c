#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
   { int soma,valor,cont;
     float media;
     setlocale(LC_ALL,"");
     for(cont = 0 ; cont < 10 ;)
        {  printf("Digite o %2d� n�mero inteiro: ",cont+1);
           scanf("%d",&valor);
           if (valor < 0)
            {  printf("Apenas n�meros positivos. Tente novamente\n");
               cont = cont;
               continue;  }
           soma += valor;
           cont++;  }
     media = (float)soma/(cont);
     printf("\nA m�dia dos %d n�meros digitados � %.2f\n",cont,media);
     return 0; }
