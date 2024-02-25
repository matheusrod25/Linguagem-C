#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int notas[10][3];
    int i, j, aluno = 1, prova = 1, menor = 0, maior = 0;
    int pior_1 = 0, pior_2 = 0, pior_3 = 0, coluna = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 10; i++)
      {  printf("Aluno %02d\n",aluno);
          for (j = 0; j < 3; j++)
           { printf("Digite a nota da prova %d: ",prova);
             scanf("%d",&notas[i][j]);
             prova++; }
         printf("\n");
         aluno++;
         prova = 1;  }
    for(i = 0; i < 10; i++)
      { for (j = 0; j < 3; j++)
          {  if (j == 0)
               {  menor = notas[i][j];
                  maior = notas[i][j];
                  coluna = j; }
             else
               {  if (notas[i][j] <= menor)
                    {  menor = notas[i][j];
                       coluna = j; }
                  else
                    maior = notas[i][j];} }
        if (menor != maior)
        {  switch(coluna)
           {  case 0: pior_1++; break;
              case 1: pior_2++; break;
              case 2: pior_3++; break; } }
        else
          {  pior_1 = 0;
             pior_2 = 0;
             pior_3 = 0; } }
    printf("\nNúmero de alunos cuja a pior nota foi na prova 1: %d",pior_1);
    printf("\nNúmero de alunos cuja a pior nota foi na prova 2: %d",pior_2);
    printf("\nNúmero de alunos cuja a pior nota foi na prova 3: %d\n",pior_3);
    return 0; }

