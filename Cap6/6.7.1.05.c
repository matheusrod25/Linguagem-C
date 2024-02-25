#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int num[8];
    int x,y;
    setlocale(LC_ALL,"");
    printf("Digite um número inteiro: ");
    scanf("%d",&num[3]);
    printf("Digite outro número inteiro: ");
    scanf("%d",&num[5]);
    printf("A soma do 4º termo = %d com o 6º termo = %d do vetor de 8 posições é %d:",
           num[3],num[5],num[3]+num[5]);
    return 0; }
