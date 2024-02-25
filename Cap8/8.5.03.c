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
    struct coordenadas p1,p2;
    setlocale(LC_ALL,"");
    printf("Digite a coordenada x do ponto 1: ");
    scanf("%f",&p1.x);
    printf("Digite a coordenada y do ponto 1: ");
    scanf(" %f",&p1.y);
    setbuf(stdin,NULL);
    printf("Digite a coordenada x do ponto 2: ");
    scanf("%f",&p2.x);
    printf("Digite a coordenada y do ponto 2: ");
    scanf(" %f",&p2.y);
    distancia = sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
    printf("\nA distância entre o ponto 1 e o ponto 2 é %.2f\n",distancia);
    return 0;
}
