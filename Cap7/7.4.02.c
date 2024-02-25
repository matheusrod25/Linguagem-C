#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { char str[100];
    int i;
    setlocale(LC_ALL,"");
    printf("Digite uma palavra ou frase: ");
    fgets(str,100,stdin);
    printf("As quatro primeiras letras da palavra digitada são: ");
    for (i = 0; i < 4; i++)
      printf("%c",str[i]);
    return 0; }
