#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char palavra1[100], palavra2[100];
    int i = 0, j = 0 , qtd =0 ;
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
      printf("\nA palavra %s n�o est� contida em %s",palavra2,palavra1);
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
                   break; } } }
    if (qtd == strlen(palavra2))
      printf("\nA palavra %s est� contida na palavra %s",palavra2,palavra1);
    else
      printf("\nA palavra %s n�o est� contida na palavra %s",palavra2,palavra1);
    return 0;  }

