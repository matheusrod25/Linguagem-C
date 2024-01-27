#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
   { int num = 1000, cont, soma = 0, mul = 0;
     setlocale(LC_ALL,"");
     for (cont = 0; cont < num; cont++)
        {  if (cont % 3 == 0 || cont % 5 == 0)
             {  mul = cont;
                soma += mul; } }
     printf("\nA soma de todos os números naturais abaixo de %d é %d\n",num,soma);
     return 0; }

