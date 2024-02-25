#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int lista[6];
    int i,j = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 6; i++)
      { printf("Digite o %dº número: ",i+1);
        scanf("%d",&lista[i]); }
    printf("\nOs valores lidos foram ");
    while (j <= 5)
     { if (j < 4)
          printf("%d, ",lista[j]);
       else
         { if (j == 4)
              printf("%d ",lista[j]);
           else
              printf("e %d.\n",lista[j]);}
       j++;}
    return 0; }
