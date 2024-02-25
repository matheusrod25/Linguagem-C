#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char texto[200];
    int i;
    setlocale(LC_ALL,"");
    printf("Digite uma palavra: ");
    setbuf(stdin,NULL);
    fgets(texto,100,stdin);
    texto [strlen(texto)-1] ='\0';
    printf("String = %s",texto);
    for (i = 0; texto[i] != '\0';i++)
      {  if (texto[i] != ' ')
           texto[i] += 3;
         else
            continue; }
    printf("\nNova string = %s",texto);
    return 0;  }




