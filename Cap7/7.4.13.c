#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char S[100];
    int i, j;
    setlocale(LC_ALL,"");
    printf("Digite uma palavra: ");
    fgets(S,100,stdin);
    S[strlen(S)-1] = '\0';
    printf("Digite as posições de início e fim da string: ");
    scanf("%d %d",&i,&j);
    if (i <= j)
      {  for (i ; i <= j; i++)
           printf("%c",S[i]); }
    else
      {  for (i ; j <= i; i--)
          printf("%c",S[i]);  }
    return 0;  }



