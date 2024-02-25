#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main()
  { char A[100], B[100], A_copia[100], B_copia[100];
    int i,j = 0, tam_A, tam_B, a = 0, b = 0, menor = 0;
    setlocale(LC_ALL,"");
    printf("Digite a primeira palavra: ");
    fgets(A,100,stdin);
    A[strlen(A)-1] = '\0';
    setbuf(stdin,NULL);
    printf("Digite a segunda palavra: ");
    fgets(B,100,stdin);
    B[strlen(B)-1] = '\0';
    setbuf(stdin,NULL);
    tam_A = strlen(A);
    tam_B = strlen(B);
    strcpy(A_copia,A);
    strcpy(B_copia,B);
    while (A_copia[j] != '\0')
    {
        A_copia[j] = tolower(A_copia[j]);
        j++;
    }
    j = 0;
    while (B_copia[j] != '\0')
    {
        B_copia[j] = tolower(B_copia[j]);
        j++;
    }

    if (tam_A == tam_B)
    {
        if (strcmp(A,B) == 0)
            printf("As duas palavras são idênticas.");
        else
        {
             for (i = 0; i < strlen(A);i++)
             {
                 if (A[i] == B[i])
                    continue;
                 else
                 {
                     if (A[i] < B[i])
                     {  a = 1;
                        break;
                     }
                     if (B[i] < A[i])
                     {  b = 1;
                        break;
                     }
                 }
            }
        }
    }
    else
    {
        menor = tam_A < tam_B ? tam_A: tam_B;
        for (i = 0; i < menor; i++)
        {
            if (A[i] == B[i] && i == menor - 1)
            {
                if (menor == tam_A)
                {
                    a = 1;
                    break;
                }
                else
                {
                    b = 1;
                    break;
                }
            }
            if (A[i] == B[i])
                continue;
            else
            {
                if (A[i] < B[i])
                {
                    a = 1;
                    break;
                }
                else
                {
                    b = 1;
                    break;
                }
            }
        }
    }
    if (a == 1)
        printf("\nOrdem alfabética das palavras:\n%s\n%s\n",A,B);
    if (b == 1)
        printf("\nOrdem alfabética das palavras:\n%s\n%s\n",B,A);
    return 0;  }

