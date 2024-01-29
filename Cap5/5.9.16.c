#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
   { int num = 0, cont = 1;
     float soma_harmonica = 0;
     setlocale(LC_ALL,"");
     printf("Digite um número inteiro postivo: ");
     scanf("%d",&num);
     for (cont; cont <= num; cont++)
       {   if (num == 0)
            break;
           if (cont == 1)
            soma_harmonica = cont;
           else
            soma_harmonica += 1/(float)cont;}
     printf("\nO valor do termo %d da série harmônica é %.3f\n",num,soma_harmonica);
     return 0; }
