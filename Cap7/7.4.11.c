#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char palavra[100];
    int i;
    setlocale(LC_CTYPE,"");
    printf("Digite uma palavra em letras maiúsculas: ");
    fgets(palavra,100,stdin);
    palavra[strlen(palavra)-1] = '\0';
    for (i = 0; palavra[i]!= '\0'; i++)
        palavra[i] += 32;
    printf("A palavra digitada em letras minúsculas é %s",palavra);

    return 0;  }

