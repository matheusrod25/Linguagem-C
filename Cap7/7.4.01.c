#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { char str[100];
    setlocale(LC_ALL,"Portuguese_Brasil.1252");
    printf("Digite uma palavra ou frase: ");
    fgets(str,100,stdin);
    printf("A palavra/frase digitada foi: %s\n",str);
    return 0; }
