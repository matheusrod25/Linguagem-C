#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char str[100], c;
    int i;
    setlocale(LC_CTYPE,"");
    printf("Digite uma palavra: ");
    fgets(str,100,stdin);
    int tam = strlen(str) - 1;
    for (i = 0 ; i < tam/2 ; i++)
      {  c = str[i];
         str[i] = str[tam - 1 - i];
         str[tam - 1 - i] = c; }
    printf("Palavra invertida = %s",str);
    return 0;  }

