#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char str[100];
    int i, palindromo = 0;
    setlocale(LC_CTYPE,"");
    printf("Digite uma palavra: ");
    fgets(str,100,stdin);
    int tam = strlen(str) - 1;
    for (i = 0 ; i < tam/2 ; i++)
      {  if (str[i] == str[tam - 1 - i])
           palindromo = 1;
         else
            palindromo = 0; }
    str[tam] = '\0';
    if (palindromo == 1)
      printf("\nA palavra %s é um palíndromo\n",str);
    else
      printf("\nA palavra %s não é um palíndromo\n",str);
    return 0;  }

