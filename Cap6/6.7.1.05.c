#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int num[8];
    int x,y;
    setlocale(LC_ALL,"");
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&num[3]);
    printf("Digite outro n�mero inteiro: ");
    scanf("%d",&num[5]);
    printf("A soma do 4� termo = %d com o 6� termo = %d do vetor de 8 posi��es � %d:",
           num[3],num[5],num[3]+num[5]);
    return 0; }
