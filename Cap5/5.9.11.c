#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
   { unsigned int num, div, cont;
     setlocale(LC_ALL,"");
     printf("Digite um número natural: ");
     scanf("%d",&num);
     printf("Os divisores do número %d são: \n",num);
     for (cont = 1; cont <= num; cont++)
        {  if(num % cont != 0)
              continue;
            div = cont;
            printf("%d ",div);  }
     return 0; }

