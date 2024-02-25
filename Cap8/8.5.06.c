#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
struct provas{
    float p1;
    float p2;
    float p3;
};

struct disciplina{
    int num_mat;
    char nome[50];
    struct provas p;
    float soma;
    float media;
};
int i,j = 0;
int indice = 0;
float maior_media = 0.0;
int main(){
    struct disciplina aluno[5];
    setlocale(LC_ALL,"");
    for(i = 0; i < 5; i++)
    {
        printf("Digite o número da matrícula do %dº aluno: ",i+1);
        scanf("%d",&aluno[i].num_mat);
        setbuf(stdin,NULL);
        printf("Digite o nome do %dº aluno: ",i+1);
        fgets(aluno[i].nome,50,stdin);
        aluno[i].nome[strlen(aluno[i].nome) - 1] = '\0';
        setbuf(stdin,NULL);
        printf("Digite a nota da prova %d: ",j+1);
        scanf("%f",&aluno[i].p.p1);
        printf("Digite a nota da prova %d: ",j+2);
        scanf(" %f",&aluno[i].p.p2);
        printf("Digite a nota da prova %d: ",j+3);
        setbuf(stdin,NULL);
        scanf("%f",&aluno[i].p.p3);
        aluno[i].soma = aluno[i].p.p1 + aluno[i].p.p2 + aluno[i].p.p3;
        aluno[i].media = aluno[i].soma / 3;
        j = 0;
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
            maior_media = aluno[i].media;
        else
        {
            if (aluno[i].media > maior_media)
            {
               maior_media = aluno[i].media;
               indice = i;
            }
        }
    }
    printf("O aluno %s possui a maior média geral: %.2f\n",aluno[indice].nome,aluno[indice].media);
    printf("Notas de suas provas: \n");
    printf("Prova 1: %.2f\nProva 2: %.2f\nProva 3: %.2f",aluno[indice].p.p1,aluno[indice].p.p2,aluno[indice].p.p3);
    return 0;
}
