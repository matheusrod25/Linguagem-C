#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int vet[10];
    int i, j, rep = 0, cont = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 10; i++)
      {  vet[i] = 0; }
    for (i = 0; i < 10;i++)
      { printf("Digite o %2dº número inteiro: ",i+1);
        scanf("%d",&vet[i]); }
    for (i = 0; i < 10; i++)
      {  for (j = i + 1; j < 10; j++)
           {  if (vet[i] == vet[j])
                { cont++;
                  rep = 1; } }
        if (rep = 1 && cont >=1)
          {  printf("%d ",vet[i]);
             rep = 0;
             cont = 0; } }
    return 0; }
