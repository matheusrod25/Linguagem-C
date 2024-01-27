#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//for
/**int main()
   { int valor,menor,maior,cont;
     setlocale(LC_ALL,"");
     for(cont = 1 ; cont <= 10 ; cont++)
      {  printf("Digite o %2dº número inteiro: ",cont);
         scanf("%d",&valor);
         if (cont == 1)
            {  menor = valor;
               maior = valor; }
         else
            if (valor <= menor)
                menor = valor;
            else
                maior = valor; }
     printf("\nO menor valor digitado é %d \nO maior valor digitado é %d",menor,maior);
     return 0; }**/

//while
int main()
   { int valor,menor,maior,cont = 1;
     setlocale(LC_ALL,"");
     while (cont <= 4)
        { printf("Digite o %2dº número inteiro: ",cont);
          scanf("%d",&valor);
          if (cont == 1)
            { menor = valor;
              maior = valor;
               }
          else
              if (valor <= menor)
                  menor = valor;
              else
                  maior = valor;
          cont++;  }
     printf("\nO menor valor digitado é %d \nO maior valor digitado é %d",menor,maior);
     return 0; }


