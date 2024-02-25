#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char str[30];
    int i;
    setlocale(LC_CTYPE,"");
    printf("Digite uma palavra: ");
    fgets(str,30,stdin);
    printf("A palavra impressa de trás para frente é ");
    for (i = strlen(str)- 2; i >= 0; i--)
      printf("%c",str[i]);
    printf("\n");
    return 0;  }

