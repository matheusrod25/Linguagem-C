#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
struct coordenadas{
    float x;
    float y;
};
int main(){
    float distancia;
    struct coordenadas atual, origem = {0,0};
    setlocale(LC_ALL,"");
    printf("Digite a coordenada x de um ponto: ");
    scanf("%f",&atual.x);
    printf("Digite a coordenada y de um ponto: ");
    scanf(" %f",&atual.y);
    distancia = sqrt(pow((atual.x - origem.x),2) + pow((atual.y - origem.y),2));
    printf("\nA distância entre o ponto e a origem é %.2f\n",distancia);
    return 0;
}

