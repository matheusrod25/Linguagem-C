#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
   { int num = 0 , menor = 0 , maior = 0 ,cont = 1;
     setlocale(LC_ALL,"");
     while (num >= 0)
       { printf("Digite um n�mero positivo: ");
         scanf("%d",&num);
         if (num < 0)
            { //menor = num; // caso considere o n�mero negativo como um n�mero lido
            break; }
         if (num >= 0 && cont == 1)
           {  menor = num;
              maior = num;  }
         else
            {   if (num <= menor)
                   menor = num;
                else
                   maior = num; }
         cont++;  }
     printf("\nO menor valor lido � %d\nO maior valor lido � %d\n",menor,maior);
     return 0; }
