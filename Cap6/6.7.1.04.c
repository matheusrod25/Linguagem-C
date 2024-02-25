#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int A[6] = {1, 0, 5, -2, -5, 7};
    int soma, i;
    setlocale(LC_ALL,"");
    printf("a) A[6] = {");
    for (i = 0; i< 6; i++)
        if (i != 5)
          printf("%d, ",A[i]);
        else
          printf("%d",A[i]);
    printf("}\n");
    soma = A[0] + A[1] + A[5];
    printf("b) A[0] + A[1] + A[5] = %d",soma);
    A[4] = 100;
    printf("\nc) A[4] = %d",A[4]);
    printf("\nd)");
    for (i = 0; i < 6; i++)
        printf("\nA[%d] = %d",i,A[i]);
    printf("\n");
    return 0; }

