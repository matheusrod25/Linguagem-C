#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[5][5];
    int i,j;
    setlocale(LC_ALL,"");
    for(i = 0; i < 5; i++)
       {  for (j = 0; j < 5; j++)
            {  if (i == j)
                 printf("1 ");
               else
                 printf("0 "); }
          printf("\n"); }
    return 0; }

