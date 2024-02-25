#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char palavra1[100], palavra2[100];
    int i = 0, j = 0 , qtd = 0 ,rep = 0;
    setlocale(LC_CTYPE,"");
    printf("Digite a primeira palavra: ");
    fgets(palavra1,100,stdin);
    palavra1[strlen(palavra1)-1] = '\0';
    setbuf(stdin, NULL);
    printf("Digite a segunda palavra: ");
    fgets(palavra2,100,stdin);
    palavra2[strlen(palavra2)-1] = '\0';
    printf("Palavra 1 = %s\nPalavra 2 = %s",palavra1,palavra2);
    if (strlen(palavra2) > strlen(palavra1))
      printf("\nA palavra %s não está contida em %s\n",palavra2,palavra1);
    else
      {  for (i = 0; i < strlen(palavra1); i++)
         {  if (palavra1[i] == palavra2[0])
              {  qtd++;
                 j++;
                 i++;
                 for (j ; j < strlen(palavra2);j++)
                   {  if (palavra1[i] == palavra2[j])
                        {  qtd++;
                           i++; }
                      else
                        {  j = 0;
                           qtd = 0;
                           break; } }
                 if (qtd == strlen(palavra2))
                   { rep++;
                     qtd = 0;
                     i--;
                     j = 0; } } } }
    if (rep)
      printf("\nA palavra %s está contida na palavra %s e se repete %d vezes\n",palavra2,palavra1,rep);
    else
      printf("\nA palavra %s não está contida na palavra %s\n",palavra2,palavra1);
    return 0;  }

