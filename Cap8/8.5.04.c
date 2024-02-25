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
    float area, base, altura, diagonal, perimetro;
    struct retangulo r;
    setlocale(LC_ALL,"");
    printf("Ponto Superior Esquerdo");
    printf("\nCoordenada x: ");
    scanf("%f",&r.p_sup_esq.x);
    printf("Coordenada y: ");
    scanf(" %f",&r.p_sup_esq.y);
    setbuf(stdin,NULL);
    printf("\n");
    printf("Ponto Inferior Direito");
    printf("\nCoordenada x: ");
    scanf("%f",&r.p_inf_dir.x);
    printf("Coordenada y: ");
    scanf(" %f",&r.p_inf_dir.y);
    setbuf(stdin,NULL);

    base = abs(r.p_inf_dir.x - r.p_sup_esq.x);
    altura = abs(r.p_sup_esq.y - r.p_inf_dir.y);
    area = base * altura;
    diagonal =  sqrt(pow(base,2) + pow(altura,2));
    perimetro = 2 *(base + altura);

    printf("\nÁrea = %.2f\nComprimento da diagonal = %.2f\nPerímetro = %.2f",area,diagonal,perimetro);
    return 0;
}

