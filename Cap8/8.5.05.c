#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
struct ponto{
    float x;
    float y;
};

struct retangulo{
    struct ponto p_sup_esq;
    struct ponto p_inf_dir;
};

int main(){
    struct retangulo r;
    setlocale(LC_ALL,"");
    printf("Ponto Superior Esquerdo do retângulo");
    printf("\nCoordenada x: ");
    scanf("%f",&r.p_sup_esq.x);
    printf("Coordenada y: ");
    scanf(" %f",&r.p_sup_esq.y);
    setbuf(stdin,NULL);
    printf("\n");

    printf("Ponto Inferior Direito do retângulo");
    printf("\nCoordenada x: ");
    scanf("%f",&r.p_inf_dir.x);
    printf("Coordenada y: ");
    scanf(" %f",&r.p_inf_dir.y);
    setbuf(stdin,NULL);

    struct ponto p;
    printf("\nPonto");
    printf("\nCoordenada x: ");
    scanf("%f",&p.x);
    printf("Coordenada y: ");
    scanf(" %f",&p.y);
    setbuf(stdin,NULL);

    if ((r.p_sup_esq.x < p.x < r.p_inf_dir.x ) && (r.p_inf_dir.y < p.y < r.p_sup_esq.y))
        printf("\nO ponto está dentro do retângulo\n");
    else
        printf("\nO ponto está fora do retângulo\n");

    return 0;

}


