#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//for
/**int main()
   { int soma,valor,cont;
     float media;
     setlocale(LC_ALL,"");
     for(cont = 0 ; cont < 10 ; cont++)
      {  printf("Digite o %2dº número inteiro: ",cont + 1);
         scanf("%d",&valor);
         soma += valor;}
     media = (float)soma /cont ;
     printf("\nA média dos %d valores digitados é %.2f\n",cont,media);
     return 0; }
**/

//while
/**int main()
   { int soma,valor,cont = 0;
     float media;
     setlocale(LC_ALL,"");
     while (cont < 10)
     {  printf("Digite o %2dº número inteiro: ",cont + 1);
        scanf("%d",&valor);
        soma += valor;
        cont++; }
     media = (float) soma/cont;
     printf("\nA média dos %d valores digitados é %f\n",cont,media);
     return 0; }
**/

