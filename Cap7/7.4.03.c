#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { char str[30];
    int i, caracteres = 0;
    setlocale(LC_CTYPE,"");
    printf("Digite uma palavra: ");
    setbuf(stdin,NULL);
    fgets(str,30, stdin);
    for (i = 0; str[i] != '\n' ;i++)
        caracteres++;
    printf("A palavra digitada possui %d caracteres.\n",caracteres);
    return 0;  }
