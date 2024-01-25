#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//for
/**int main()
    { int soma, valor, cont;
    setlocale(LC_ALL,"");
    for(cont = 1; cont <= 10; cont++)
        { printf("Digite o %2dº valor: ",cont);
        scanf("%d",&valor);
        soma += valor; }
    printf("A soma dos %d valores digitados: %d",cont-1,soma);
    return 0; }
 **/


//while
/**int main()
   { int soma , valor, cont = 1;
     setlocale(LC_ALL,"");
     while (cont <= 10)
    {  printf("Digite o %2dº valor: ",cont);
       scanf("%d",&valor);
       soma += valor;
       cont++; }
    printf("A soma dos %d valores digitados: %d",cont-1,soma);
    return 0; } **/

//do-while
/**int main()
   { int soma , valor, cont = 1;
     setlocale(LC_ALL,"");
     do
     { printf("Digite o %2dº valor: ",cont);
       scanf("%d",&valor);
       soma += valor;
       cont++;
     } while(cont <= 10);
    printf("A soma dos %d valores digitados: %d",cont-1,soma);
    return 0; }**/

