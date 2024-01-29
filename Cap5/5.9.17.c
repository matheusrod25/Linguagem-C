#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Solução própria
int main()
   { int num = 0 , valor = 1, cont = 0, qtd_num = 1;
     setlocale(LC_ALL,"");
     printf("Digite um número inteiro positivo: ");
     scanf("%d",&num);
     while (num >= qtd_num)
       {  if (num == qtd_num)
            {  printf("%d",valor);
               break; }
          else
            {  printf("%d\n",valor);
               valor++;
               qtd_num++;
               sequencia:
               while (cont < qtd_num)
                 {  printf("%d ",valor);
                    cont++;
                    valor++; }
                    if (num == qtd_num && qtd_num == cont)
                      break;
                    else
                      {  qtd_num++;
                         printf("\n%d ",valor);
                         cont = 1;
                         valor++;
                         goto sequencia; } } }
     printf("\n");
     return 0; }
//Solução professor
/**int main()
   { int N = 6;
     setlocale(LC_ALL,"");
     int i,j, c = 0;
     for (i = 1; i <= N; i++)
        { for (j = 1; j <= i; j++)
            {  c++;
               printf("%d ",c); }
          printf("\n"); }
     return 0; }**/
