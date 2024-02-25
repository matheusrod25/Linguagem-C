#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char palavra[100], letra;
    int i,vogais = 0;
    setlocale(LC_CTYPE,"");
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    printf("Palavra digitada = %s",palavra);
    printf("\nDigite uma vogal ou consoante: ");
    setbuf(stdin,NULL);
    letra = getchar();
    for (i = 0; i < strlen(palavra); i++)
      {  switch(palavra[i]){
           case 'a':
           case 'A':
           { palavra[i] = letra ;
             break;}
           case 'e':
           case 'E':
           { palavra[i] = letra ;
             break;}
           case 'i':
           case 'I':
           { palavra[i] = letra ;
             break;}
           case 'o':
           case 'O':
           { palavra[i] = letra ;
             break;}
           case 'u':
           case 'U':
           { palavra[i] = letra ;
             break;}
          }
      }
    for (i = 0; i < strlen(palavra); i++)
    {  switch(palavra[i]){
           case 'a':
           case 'A':
           vogais++ ;
             break;

           case 'e':
           case 'E':
           vogais++;
             break;

           case 'i':
           case 'I':
           vogais++;
             break;

           case 'o':
           case 'O':
           vogais++;
             break;

           case 'u':
           case 'U':
           vogais++;
             break;
          }
      }
    printf("A palavra modificada é %s e possui %d vogais",palavra,vogais);
    return 0;  }

