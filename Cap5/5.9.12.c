#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
   { int soma, num ,div,cont;
     setlocale(LC_ALL,"");
     printf("Digite um número inteiro: ");
     scanf("%d",&num);
     for (cont = 2 ; cont <= num ; cont++)
        {  if (num % cont == 0)
              { div = num/cont;
                soma += div; } }
     printf("Soma = %d",soma);
     return 0; }


