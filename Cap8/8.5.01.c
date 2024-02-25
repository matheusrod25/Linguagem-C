#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct ficha {
    char nome[50];
    int idade;
    char endereco[50];
} pessoa;

int main(){
    //struct ficha pessoa;
    setlocale(LC_ALL,"");
    printf("Digite seu nome: ");
    fgets(pessoa.nome,50,stdin);
    pessoa.nome[strlen(pessoa.nome)- 1] = '\0';
    setbuf(stdin,NULL);
    printf("Digite sua idade: ");
    scanf("%d",&pessoa.idade);
    setbuf(stdin,NULL);
    printf("Digite seu endereço: ");
    fgets(pessoa.endereco,50,stdin);
    pessoa.endereco[strlen(pessoa.endereco)- 1] = '\0';
    printf("\nNome: %s\nIdade: %d\nEndereço: %s",pessoa.nome,pessoa.idade,pessoa.endereco);
    return 0;
}
