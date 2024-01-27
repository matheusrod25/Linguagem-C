#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
   { int i , fib, fib0, fib1 , num , valor , valor_antigo, valor_novo;
     i = fib = fib0 = num = valor_antigo = valor_novo = 0;
     fib1 = 1;
     setlocale(LC_ALL,"");
     printf("Digite um número inteiro maior ou igual a zero: ");
     scanf("%d",&num);
     valor = num;
     while (num >= 0)
       { if (i == 0)
            { valor_antigo = fib0;
              valor_novo = valor_antigo;
              fib = valor_antigo + valor_novo; }
         if (i == 1)
            { valor_antigo = valor_novo;
              valor_novo = valor_antigo + fib1;
              fib = valor_antigo + valor_novo; }
         if (i == 2)
            { valor_antigo = valor_antigo;
              valor_novo = fib;
              fib = valor_antigo + valor_novo; }
         if (i > 2)
            { valor_antigo = valor_novo;
              valor_novo = fib;
              fib = valor_antigo + valor_novo; }
         i++;
         num--;  }
     printf("\nO termo de número %d da sequência de Fibonacci é igual a %d\n",valor,fib);


     return 0; }
